#ifndef GAME_H
#define GAME_H

#include "Ship.h"
#include "Utils.h"
#include "Mine.h"
#include "Explosion.h"
#include <vector>

class Game{
    private:
        std::vector<GameEntity*> entities;
    public:
        std::vector<GameEntity*> get_entities(){
            return entities;
        }
        void set_entities(GameEntity* entity){
            entities.push_back(entity);
        }
        std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight) {
            Utils utility;
            for (int i = 0; i < numShips; i++) {
                std::tuple<int, int> position = utility.generateRandomPos(gridWidth,gridHeight);
                Ship* ship = new Ship(std::get<0>(position),std::get<1>(position));
                this->set_entities(ship);
            }
            for (int i = 0; i < numMines; i++) {
                std::tuple<int, int> position = utility.generateRandomPos(gridWidth,gridHeight);
                Mine* mine = new Mine(std::get<0>(position),std::get<1>(position));
                this->set_entities(mine);
            }
            return entities;
        }
        void gameLoop(int maxIterations, double mineDistanceThreshold){
            bool isShips = true;
            std::vector<GameEntity*> entities = get_entities();
            for (int i = 0; i < maxIterations; i++) {
                isShips = false;
                for (GameEntity* entity: entities) {
                    if (entity->getType() == ShipType) {
                        Ship* ship = dynamic_cast<Ship*>(entity);
                        ship->move(1,0);
                        isShips = true;
                    }
                    if (entity->getType() == MineType) {
                        for (int k = 0; k < entities.size(); k++) {
                            int mineX = std::get<0>(entity->getPos());
                            int mineY = std::get<1>(entity->getPos());
                            if (entities[k]->getType() == ShipType &&
                            (mineX - mineDistanceThreshold <= std::get<0>(entity->getPos()) <= mineX + mineDistanceThreshold) &&
                        (mineY - mineDistanceThreshold <= std::get<1>(entity->getPos()) <= mineY + mineDistanceThreshold)){
                                Mine* mine = dynamic_cast<Mine*>(entity);
                                Explosion boom = mine->explode();
                                boom.apply(*entities[k]);
                            }
                        }
                    }
                }
                if (isShips == false) {return;}
            }
        }
};

#endif