#include "SailBoat.h"
#include <iostream>
#include <exception>
#include "Table.h"

using namespace std;

int main() {
    try {
        Table table;
        table.make_table();
        cout << table << endl;
        Field field1('C', 4);
        Field field2('D', 5);
        Field field3('B', 4);

        SailBoat sailBoat1(field1);
        SailBoat sailBoat2(field2);
        SailBoat sailBoat3(field3);

        List<Figure &> figures_list;
        figures_list += sailBoat1;
        figures_list += sailBoat2;
        figures_list += sailBoat3;
        cout << sailBoat1.get_type() << endl;
        cout << sailBoat2.get_type() << endl;
        cout << sailBoat3.get_type() << endl;
        sailBoat1.generate_fields();
        sailBoat2.generate_fields();
        sailBoat3.generate_fields();

        if (sailBoat1 & sailBoat2) cout << "Figures sailBoat1 and sailBoat2 overlap!" << endl;
        if (sailBoat1 & sailBoat3) cout << "Figures sailBoat1 and sailBoat3 overlap!" << endl;
        if (sailBoat2 & sailBoat3) cout << "Figures sailBoat2 and sailBoat3 overlap!" << endl;

    } catch (const exception &e) {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}
