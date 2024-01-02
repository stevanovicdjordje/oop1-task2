#ifndef OOP1DZ2V1_WINTERTIRE_H
#define OOP1DZ2V1_WINTERTIRE_H
#include "Tire.h"

class WinterTire: public Tire{
public:
    static const char WinterTireLabel = 'Z';

    WinterTire(double width, double height, double diameter, double tread_path, double price,
               Time production_time) : Tire(width, height, diameter, tread_path, price, production_time) {};

    char get_tire_label() const override { return WinterTireLabel; };
};

#endif //OOP1DZ2V1_WINTERTIRE_H
