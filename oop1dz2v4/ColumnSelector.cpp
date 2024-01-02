#include "ColumnSelector.h"

string ColumnSelector::get_description() {
    return columns_list.get_textual_description(",");
}
