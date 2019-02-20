#include <iostream>
#include <fstream>

int main() {
    std::string data;
    std::fstream file;
    file.open("test.txt", std::ios::in);

    while (std::getline(file, data)) {
        std::cout << data << "\n";
    }
    file.close();

    int x = 0xFFFFFFFF;
    std::fstream binary_file;
    binary_file.open("text.bin", std::ios::binary | std::ios::in | std::ios::out);
    binary_file.write((char*)&x, 8);
    binary_file.close();
    
    return 0;
}