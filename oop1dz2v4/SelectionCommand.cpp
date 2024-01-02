#include "SelectionCommand.h"

SelectionCommand::SelectionCommand(Table &table, Selector &selector) : Command(table), selector(selector) {
    if (!table.contains_all_columns(selector.get_list_of_names())) throw NoColumnsInTable();
}

string SelectionCommand::get_description() const {
    return "SELECT " + selector.get_description() + " FROM " + table.get_table_name();
}

Selector &SelectionCommand::get_selector() const {
    return selector;
}

