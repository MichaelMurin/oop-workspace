#include "Fridge.h"

Fridge::Fridge():Appliance(){
    volume = 25;
}

Fridge::Fridge(int powerRating, double volume):Appliance(powerRating){
    this->volume = volume;
}

void Fridge::setVolume(double volume){
    this->volume = volume;
}

double Fridge::getVolume() {
    return volume;
}

double Fridge::getPowerConsumption(){
    return powerRating * 24 * (volume / 100);
}