#include <iostream>

int main() {
    std::cout << "Same as C\n\n";

    int i = 5;
    while (i > 0) {
        std::cout << i << " ";
        i--;
    }
    std::cout << "\n";
    for (i++; i<6; i++) {
        std::cout << i << " ";
    }
    
    return 0;
}