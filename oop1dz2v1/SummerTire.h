#ifndef OOP1DZ2V1_SUMMERTIRE_H
#define OOP1DZ2V1_SUMMERTIRE_H

#include "Tire.h"
#include "Errors.h"

class SummerTire : public Tire {
public:
    static const char SummerTireLabel = 'L';

    SummerTire(double width, double height, double diameter, double tread_path, double price,
               Time production_time) : Tire(width, height, diameter, tread_path, price, production_time) {};

    char get_tire_label() const override { return SummerTireLabel; };

};

#endif //OOP1DZ2V1_SUMMERTIRE_H
