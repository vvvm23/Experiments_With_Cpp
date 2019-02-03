#include <iostream>

int main() {
    std::cout << "Again, same as C\n";

    if (1 == 1) {
        std::cout << "Math works.\n";
    }
    else {
        std::cout << "Math is broke chief.\n";
    }

    switch(1) {
        case 1:
            std::cout << "Math still works.\n";
            break;
        case 0:
            std::cout << "Math is broken again.\n";
            break;
        default:
            std::cout << "Then what the fuck?\n";
    }

    return 0;
}