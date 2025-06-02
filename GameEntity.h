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
            std::get<0>(position) = 0;
            std::get<1>(position) = 0;
            type = NoneType;
        }
        GameEntity(int x, int y, char type) {
            std::get<0>(position) = x;
            std::get<1>(position) = y;
            this->type = (GameEntityType)type;
        }
        std::tuple<int, int> getPos() {
            return position;
        }
        GameEntityType getType() {
            return type;
        }
};

#endif