#include <iostream>
//using namespace std
int extern_var = 4;
int main() {
    int auto_var = 1;
    register int reg_var = 2;
    static int static_var = 3;
    extern int extern_var;

    std::cout << "Value stored in auto (default) datatype is: " << auto_var << "\n";
    std::cout << "Value stored in register datatype is: " << reg_var << \
                " This value will be stored in register if possible.\n";
    std::cout << "Value stored in static datatype is: " << static_var << \
                " This means value will persist betwee function calls or outside scope.";
    std::cout << "Value stored in extern datatype is: " << extern_var << \
                " This means it will point to a previous defined variable under same name in another file.\n";

    return 0;
}