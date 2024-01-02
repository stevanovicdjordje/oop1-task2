#ifndef OOP1DZ2V1_ALLSEASONTIRE_H
#define OOP1DZ2V1_ALLSEASONTIRE_H
#include "Tire.h"

class AllSeasonTire: public Tire {
public:
    static const char AllSeasonTireLabel = 'A';

    AllSeasonTire(double width, double height, double diameter, double tread_path, double price,
               Time production_time) : Tire(width, height, diameter, tread_path, price, production_time) {};

    char get_tire_label() const override { return AllSeasonTireLabel; };
};

#endif //OOP1DZ2V1_ALLSEASONTIRE_H
