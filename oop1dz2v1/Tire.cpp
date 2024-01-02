#include "Tire.h"

double Tire::decrement = 0.1;

ostream &operator<<(ostream &os, const Tire &tire) {
    tire.print(os);
    return os;
}

void Tire::print(ostream &os) const {
    os << width << "/" << height << "R/" << diameter << "-" << get_tire_label() << "@" << production_time << "=="
       << price;
}

bool Tire::operator==(const Tire &tire) const {
    if (width == tire.width and height == tire.height and diameter == tire.diameter and
        get_tire_label() == tire.get_tire_label()) {
        return true;
    }
    return false;
}


bool Tire::is_tread_depth_good() const {
    if ((get_tire_label() == 'L' and (tread_depth - decrement) > 1.6) or
        (get_tire_label() == 'Z' and (tread_depth - decrement) > 4) or
        (get_tire_label() == 'A' and (tread_depth - decrement) > 4)) {
        return true;
    }
    return false;
}

void Tire::operator--(int) {
    if ((get_tire_label() == 'L' and (tread_depth - decrement) > 1.6) or
        (get_tire_label() == 'Z' and (tread_depth - decrement) > 4) or
        (get_tire_label() == 'A' and (tread_depth - decrement) > 4)) {
        tread_depth -= decrement;
    }else {
        throw MinimalTreadDepth();
    }
}

