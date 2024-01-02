#include "Function.h"

ostream &operator<<(ostream &os, const Function &function) {
    os << function.name << "(";
    for (int i = 0; i < function.parameter_list.get_number_of_elements(); i++)
        if (i + 1 != function.parameter_list.get_number_of_elements()) {
            os << function.parameter_list[i] << ",";
        } else {
            os << function.parameter_list[i];
        }
    os << ")";
    return os;
}

