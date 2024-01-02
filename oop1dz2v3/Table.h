#ifndef OOP1DZ2V3_TABLE_H
#define OOP1DZ2V3_TABLE_H

#include "List.h"
#include "Field.h"
#include <iostream>

using namespace std;


class Table {
    static int rows, columns;
    List<List<Field>> table;

public:
    void make_table();

    friend ostream &operator<<(ostream &os, const Table &table1);
};

#endif //OOP1DZ2V3_TABLE_H
