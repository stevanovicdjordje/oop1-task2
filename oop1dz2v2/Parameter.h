#ifndef OOP1DZ2V2_PARAMETER_H
#define OOP1DZ2V2_PARAMETER_H

#include <iostream>
#include <string>

using namespace std;

enum Type {
    INT, FLOAT, STRING
};

class Parameter {
protected:
    string name;
    Type type;
    static string str_type[];

    virtual void print(ostream &os) const;

public:
    Parameter(const string &name, Type type) : name(name), type(type) {}

    friend bool operator==(const Parameter &parameter1, const Parameter &parameter2);

    friend ostream &operator<<(ostream &os, const Parameter &parameter);
};

#endif //OOP1DZ2V2_PARAMETER_H
