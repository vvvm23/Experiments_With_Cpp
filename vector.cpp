// std::vector example
#include <iostream>
#include <vector>
#include <cmath>

int main() {
    std::vector<int> v1;
    for (int i = 0; i < 5; i++) {
        v1.push_back((int) std::pow(i, 2));
    }
    std::cout << "Size of vector: " << v1.size();
    std::cout << "\nCapacity of vector: " << v1.capacity();
    std::cout << "\nMax size of vector: " << v1.max_size();

    std::cout << "\n\nResizing..";
    v1.resize(6);

    std::cout << "\nSize of vector: " << v1.size();
    std::cout << "\nCapacity of vector: " << v1.capacity();
    std::cout << "\nMax size of vector: " << v1.max_size();    

    std::cout << "\n\n Shrinking to fit..";
    v1.shrink_to_fit();

    std::cout << "\nSize of vector: " << v1.size();
    std::cout << "\nCapacity of vector: " << v1.capacity();
    std::cout << "\nMax size of vector: " << v1.max_size();       

    std::cout << "\n\nOutputting contents..";
    std::cout << "\nIndex method: ";
    for (int i = 0; i < v1.size(); i++) {
        std::cout << v1[i] << " ";
    }


    std::cout << "\nIterator method: ";
    for (auto i = v1.begin(); i != v1.end(); i++) {
        std::cout << *i << " ";
    }
    std::cout << "\n";
    return 0;
}