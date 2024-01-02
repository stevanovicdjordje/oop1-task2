#include "Table.h"

int Table::rows = 10;
int Table::columns = 10;

void Table::make_table() {
    Field field1('A', 1);
    for (int i = 0; i < rows; i++) {
        List<Field> field;
        for (int j = 0; j < columns; j++) {
            field += field1.get_relative_field(i, j);
        }
        table += field;
    }
}

ostream &operator<<(ostream &os, const Table &table1) {
    for (int i = 0; i < table1.rows; i++) {
        for (int j = 0; j < table1.columns; j++) {
            if (j == 0) {
                os << table1.table[i][j].get_column() << " X" << " ";
            } else {
                os << "X" << " ";
            }
        }
        os << '\n';
    }
    return os;
}


