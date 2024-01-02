#ifndef OOP1DZ2V1_TIRE_H
#define OOP1DZ2V1_TIRE_H

#include <iostream>
#include "Time.h"
#include "Errors.h"

class Tire {
    static double decrement;
    double width, height, diameter, tread_depth, price;
    Time production_time;
public:
    Tire(double width, double height, double diameter, double tread_depth, double price, Time production_time)
            : production_time(production_time) {
        if (width <= 0 || height <= 0 || diameter <= 0 || tread_depth <= 0 || price <= 0) throw WrongTireParameters();
        this->width = width, this->height = height, this->diameter = diameter, this->tread_depth = tread_depth,
        this->production_time = production_time, this->price = price;
    }
    Tire(const Tire& tire) = delete;

    Tire &operator=(const Tire& tire) = delete;

    double get_width() const { return width; }

    double get_height() const { return height; }

    double get_diameter() const { return diameter; }

    double get_tread_depth() const { return tread_depth; }

    double get_price() const { return price; }

    Time get_production_time() const { return production_time; }

    virtual bool operator==(const Tire& tire) const;

    virtual void operator--(int);

    virtual bool is_tread_depth_good() const;

    virtual char get_tire_label() const = 0;

protected:

    virtual void print(ostream &os) const;

    friend ostream& operator<<(ostream& os, const Tire& tire);
};

#endif //OOP1DZ2V1_TIRE_H
