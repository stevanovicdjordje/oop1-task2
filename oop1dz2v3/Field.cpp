#include "Field.h"

bool operator==(const Field &field1, const Field &field2) {
    if (field1.row == field2.row and field1.column == field2.column) return true;
    return false;
}

ostream &operator<<(ostream &os, const Field &field) {
    os << field.column << " " << field.row;
    return os;
}
