#ifndef OOP1DZ2V4_SELECTIONCOMMAND_H
#define OOP1DZ2V4_SELECTIONCOMMAND_H

#include "Command.h"

class SelectionCommand : public Command {
    Selector &selector;
public:
    SelectionCommand(Table &table, Selector &selector);

    string get_description() const override;

    Selector &get_selector() const override;
};

#endif //OOP1DZ2V4_SELECTIONCOMMAND_H
