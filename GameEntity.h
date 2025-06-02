#ifndef GAMEENTITY_H
#define GAMEENTITY_H

#include <iostream>
#include <tuple>

enum GameEntityType {
    ExplosionType,
    MineType,
    NoneType,
    ShipType
};

class GameEntity {
    private:
        std::tuple<int, int> position;
        GameEntityType type;
    public:
        GameEntity() {
            position = std::make_tuple(0, 0);
            type = NoneType;
        }
        GameEntity(int x, int y, char type) {
            std::make_tuple(x, y);
            this->type = (GameEntityType)type;
        }
        std::tuple<int, int> getPos() {
            return position;
        }
        GameEntityType getType() {
            return type;
        }

        void setPos(int x, int y) {
            position = std::make_tuple(x, y);
        }
        void setType(char type) {
            this->type = (GameEntityType)type;
        }
};

#endif