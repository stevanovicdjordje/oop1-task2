#ifndef OOP1DZ2V3_SAILBOAT_H
#define OOP1DZ2V3_SAILBOAT_H

#include "Figure.h"

class SailBoat : public Figure {
public:
    static const char SAILBOAT_TYPE = 'H';

    SailBoat(const Field& center) : Figure(center) {}

    char get_type() const override { return SAILBOAT_TYPE; }

    void generate_fields();
};

#endif //OOP1DZ2V3_SAILBOAT_H
