#ifndef OOP1DZ2V3_FIELD_H
#define OOP1DZ2V3_FIELD_H

#include "Errors.h"
#include <iostream>
using namespace std;

class Field {
    char column;
    int row;
public:

    Field(char column, int row) {
        if (column < 'A' or column > 'J' or row < 1 or row > 10) throw InvalidValue();
        else this->column = column, this->row = row;
    }

    char get_column() const { return column; }

    int get_row() const { return row; }

    Field& get_relative_field(int shift1, int shift2) const {
        return *new Field(column + shift1, row + shift2);
    }

    friend bool operator==(const Field &field1, const Field &field2);

    friend ostream& operator<<(ostream& os, const Field& field);
};


#endif //OOP1DZ2V3_FIELD_H
