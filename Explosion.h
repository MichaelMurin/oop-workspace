#ifndef EXPLOSION_H
#define EXPLOSION_H

#include "GameEntity.h"
#include "Effect.h"

class Explosion: public GameEntity, public Effect{
    public:
        Explosion(){
            this->setPos(0,0);
            this->setType(0);
        }
        Explosion(int x, int y){
            this->setPos(x,y);
            this->setType(0);
        }
        void apply(GameEntity& type) {
            type.setPos(-1,-1);
            type.setType(2);
            this->setPos(-1,-1);
            this->setType(2);
        }
};

#endif