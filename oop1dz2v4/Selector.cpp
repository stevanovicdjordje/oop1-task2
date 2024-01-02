#include "Selector.h"

int Selector::id_counter = 0;

bool operator==(Selector &selector1, Selector &selector2) {
    List<string> list1 = selector1.get_list_of_names();
    List<string> list2 = selector2.get_list_of_names();
    list1.declare_current();
    list2.declare_current();

    while (list1.is_current_exists() and list2.is_current_exists()) {
        if (list1.get_current_data() == list2.get_current_data()) {
            list1.move_to_next_element();
            list2.move_to_next_element();
        } else {
            return false;
        }
    }
    return true;
}
