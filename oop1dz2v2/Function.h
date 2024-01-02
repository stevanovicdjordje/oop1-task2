#ifndef OOP1DZ2V2_FUNCTION_H
#define OOP1DZ2V2_FUNCTION_H
#include "Parameter.h"
#include "List.h"

class Function {
    string name;
    List<Parameter&> parameter_list;
public:
    Function(const string& name) : name(name) {}

    void add_parameter(Parameter& parameter) { parameter_list += parameter; };

    int get_num_parameters() const { return parameter_list.get_number_of_elements(); }

    const Parameter& get_parameter(int index) { return parameter_list[index]; }

    friend ostream& operator<<(ostream& os, const Function& function);

};

#endif //OOP1DZ2V2_FUNCTION_H
