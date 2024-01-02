#ifndef OOP1DZ2V2_ARGUMENT_H
#define OOP1DZ2V2_ARGUMENT_H

#include "Parameter.h"

class Argument : public Parameter {
    string value;

    void print(ostream &os) const override;

public:
    Argument(const string &name, Type type, const string &value) : Parameter(name, type), value(value) {}

    string get_value() const { return value; }

};


#endif //OOP1DZ2V2_ARGUMENT_H
