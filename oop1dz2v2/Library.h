#ifndef OOP1DZ2V2_LIBRARY_H
#define OOP1DZ2V2_LIBRARY_H
#include "Function.h"
#include "List.h"

class Library {
    List<Function> function_list;
public:
    void add_function(const Function& function) { return function_list += function;}
    const Function& operator [](int index) const { return function_list[index]; };
    friend ostream& operator<<(ostream& os, const Library& library);
};

#endif //OOP1DZ2V2_LIBRARY_H
