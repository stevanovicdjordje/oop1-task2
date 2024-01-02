#include <iostream>
#include "Parameter.h"
#include "Function.h"
#include "Errors.h"
#include "Argument.h"
#include "Library.h"

int main() {
    try {
        Library library;

        // Create functions and parameters
        Function func1("Function1");
        Argument argument1("param1", INT, "10");
        Argument argument2("param2", FLOAT, "3.14");
        func1.add_parameter(argument1);
        func1.add_parameter(argument2);

        Function func2("Function2");
        Argument argument3("param3", STRING, "Hello");
        func2.add_parameter(argument3);

        // Add functions to the library
        library.add_function(func1);
        library.add_function(func2);

        // Print the entire library
        cout << "Library:\n";
        cout << library;

        // Access a function from the library and print its details
        int function_index = 1;  // Assuming there is at least one function in the library
        Function retrieved_function = library[function_index];
        cout << retrieved_function << endl;

        // Modify a parameter of the retrieved function
        int parameter_index = 0;  // Assuming there is at least one parameter in the function
        Parameter parameter_to_modify = retrieved_function.get_parameter(parameter_index);
        cout << library;
    } catch (exception &e) {
        cout << e.what() << endl;
    }

    return 0;
}
