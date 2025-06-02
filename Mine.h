#ifndef MINE_H
#define MINE_H

#include "GameEntity.h"
#include "Explosion.h"
#include <tuple>

class Mine: public GameEntity {
    public:
        Mine(){
            this->setPos(0,0);
            this->setType(1);
        }
        Mine(int x,int y){
            this->setPos(x,y);
            this->setType(1);
        }
        Explosion explode(){
            this->setType(2);
            Explosion boom = Explosion(std::get<0>(this->getPos()),std::get<1>(this->getPos()));
            return boom;
        }
};

#endif