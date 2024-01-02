#include "Table.h"

bool Table::contains_column_name(const string &column_name) const {
    if (column_names.is_list_contains(column_name)) return true;
    return false;
}

bool Table::contains_all_columns(List<string> columns) const {
    columns.declare_current();
    for (int i = 0; i < columns.get_number_of_elements(); i++) {
        if (column_names.is_list_contains(columns.get_current_data())) {
            columns.move_to_next_element();
        }else{
            return false;
        }
    }
    return true;
}


