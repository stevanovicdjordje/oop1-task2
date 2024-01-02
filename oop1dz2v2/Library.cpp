#include "Library.h"


ostream &operator<<(ostream &os, const Library &library) {
    for (int i = 0; i < library.function_list.get_number_of_elements(); i++) {
        os << library[i] << endl;
    }
    return os;
}
