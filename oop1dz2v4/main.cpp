#include "Table.h"
#include "ColumnSelector.h"
#include "SelectionCommand.h"
#include <iostream>

int main() {
    try {
        List<string> l1, l2, l3;
        l1 += "a1";
        l1 += "b1";
        l1 += "c1";
        l2 += "a1";
        l2 += "b1";
        l2 += "c1";
        l3 += "a1";
        l3 += "b1";
        l3 += "c1";

        cout << l1.get_textual_description(" / ");
        l2 += l3;
        cout << endl << l2.get_textual_description(" -> ");
        Table t1("t1", l1), t2("t2", l2), t3("t3", l3);
        cout << endl << t2.get_column_names().get_textual_description(" - ") << endl;
        cout << endl << t2.contains_all_columns(l1) << " " << t2.contains_all_columns(l2) << " "
             << t2.contains_all_columns(l3) << endl;
        l3 += "TEST";
        cout << endl << t2.contains_all_columns(l1) << " " << t2.contains_all_columns(l2) << " "
             << t2.contains_all_columns(l3) << endl;

        Selector *s1 = new ColumnSelector(l1);
        Command *command = new SelectionCommand(t1, *s1);

        cout << endl << s1->get_description();
        cout << endl << command->get_description();
        cout << endl << command->get_selector().get_description();
        cout << endl << (string) *command;

        ColumnSelector sk1(l1), sk2(l2);
        cout << endl << (sk1 == sk2);

    } catch (const exception &e) { cout << endl << e.what() << endl; }
    return 0;
}

