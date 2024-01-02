#include "Argument.h"

void Argument::print(ostream &os) const {
    Parameter::print(os);
    os << "=" << value;
}
