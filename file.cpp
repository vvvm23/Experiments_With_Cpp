#include <iostream>
#include <fstream>

int main() {
    // Text file example
    std::string data;
    std::fstream file;
    file.open("test.txt", std::ios::in);

    while (std::getline(file, data)) {
        std::cout << data << "\n";
    }
    file.close();

    // Binary file example
    int x = 128;
    char buffer[sizeof(int)];
    int int_buffer;

    std::fstream binary_file;
    binary_file.open("text.bin", std::ios::binary | std::ios::in | std::ios::out);
    binary_file.write((char*)&x, sizeof(int));
    binary_file.close();

    binary_file.open("text.bin", std::ios::binary | std::ios::in | std::ios::out);
    binary_file.read((char*)&int_buffer, sizeof(int));
    std::cout << int_buffer << "\n" << x << "\n";
    binary_file.close();

    return 0;
}