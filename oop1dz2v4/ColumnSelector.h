#ifndef OOP1DZ2V4_COLUMNSELECTOR_H
#define OOP1DZ2V4_COLUMNSELECTOR_H
#include "Selector.h"

class ColumnSelector: public Selector {
    List<string> columns_list;
public:
    ColumnSelector(List<string>& column_list) : Selector(), columns_list(column_list) {}
    string get_description() override;
    List<string> get_list_of_names() override { return columns_list; }
};

#endif //OOP1DZ2V4_COLUMNSELECTOR_H
