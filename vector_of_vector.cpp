#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> OwO;
        std::vector<int> v1;
            v1.push_back(1);
            v1.push_back(2);
            v1.push_back(3);
        std::vector<int> v2;
            v2.push_back(4);
            v2.push_back(5);
            v2.push_back(6);

    OwO.push_back(v1);
    OwO.push_back(v2);

    for (auto i = OwO.begin(); i != OwO.end(); i++) {
        for (auto j = (*i).begin(); j != (*i).end(); j++) {
            std::cout << *j << " ";
        }
    }
    std::cout << "\n";

    std::vector<std::vector<int>> *v_v;
    v_v = &OwO;
    for (auto i = (*v_v).begin(); i != (*v_v).end(); i++) {
        for (auto j = (*i).begin(); j != (*i).end(); j++) {
            std::cout << *j << " ";
        }
    }  
    std::cout << "\n" << OwO.max_size() << "\n";

    return 0;
}