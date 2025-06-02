#ifndef SHIP_H
#define SHIP_H

#include "GameEntity.h"

class Ship: public GameEntity{
    private:
    public:
        Ship(){
            this->setPos(1,1);
            this->setType(3);
        }
        Ship(int x,int y){
            this->setPos(x,y);
            this->setType(3);
        }
        void move(int dx, int dy){
            this->setPos(std::get<0>(this->getPos())+dx,std::get<1>(this->getPos())+dy);
        }
};

#endif