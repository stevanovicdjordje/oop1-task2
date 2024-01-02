#include "Parameter.h"
#include <string>

string Parameter::str_type[] = {"INT", "FLOAT", "STRING"};

bool operator==(const Parameter &parameter1, const Parameter &parameter2) {
    if (parameter1.type == parameter2.type) {
        return true;
    }
    return false;
}

ostream &operator<<(ostream &os, const Parameter& parameter) {
    parameter.print(os);
    return os;
}

void Parameter::print(ostream &os) const {
    os << str_type[type] << " " << name;
}