#ifndef OOP1DZ2V4_COMMAND_H
#define OOP1DZ2V4_COMMAND_H

#include "Table.h"
#include "Selector.h"

class Command {
protected:
    Table table;
public:
    Command(Table &table) : table(table) {}

    operator string() { return get_description(); }

    virtual string get_description() const = 0;

    virtual Selector &get_selector() const = 0;

    Command(const Command &) = delete;

    Command &operator=(const Command &) = delete;
};

#endif //OOP1DZ2V4_COMMAND_H
