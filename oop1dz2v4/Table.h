#ifndef OOP1DZ2V4_TABLE_H
#define OOP1DZ2V4_TABLE_H

#include "List.h"
#include <string>
using namespace std;

class Table {
    std::string table_name;
    List<std::string> column_names;
public:
    Table(const string &table_name, const List<string> &column_names) : table_name(table_name),
                                                                                  column_names(column_names) {};

    string get_table_name() const { return table_name; }

    const List<string> &get_column_names() const { return column_names; }

    bool contains_column_name(const string &column_name) const;

    bool contains_all_columns(List<string> columns) const;

};


#endif //OOP1DZ2V4_TABLE_H
