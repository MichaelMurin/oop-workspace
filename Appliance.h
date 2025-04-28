#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance {
    private:
        int powerRating;
        bool isOn;
    public:
        Appliance();
        Appliance(int powerRating); //creates appliance with power rating

        void turnOff();
        void turnOn();
        virtual double getPowerConsumption();
        int get_powerRating();
        void set_powerRating(int powerRating);
        bool get_isOn();
};

#endif