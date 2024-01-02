#ifndef OOP1DZ2V4_SELECTOR_H
#define OOP1DZ2V4_SELECTOR_H

#include "List.h"
#include <string>

class Selector {
protected:
    static int id_counter;
    int selector_id;
public:
    Selector() { selector_id = id_counter++; }

    virtual List<string> get_list_of_names() = 0;

    virtual ~Selector() = default;

    virtual string get_description() = 0;

    friend bool operator==(Selector &selector1, Selector &selector2);

};

#endif //OOP1DZ2V4_SELECTOR_H
