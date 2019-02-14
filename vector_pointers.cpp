#include <iostream>
#include <vector>

class Test {
    public:
        Test(int _x, int _y, int _z) {
            x = _x;
            y = _y;
            z = _z;
        }
        int get_x() { return x; }
        int get_y() { return y; }
        int get_z() { return z; }
    private:
        int x;
        int y;
        int z;
};

std::vector<Test*> pass_vector(std::vector<Test*> _v) {
    return _v;
}

int main() {
    Test test_array[] = {Test(1,2,3), Test(4,5,6), Test(7,8,9)};

    std::vector<Test*> test_vector;

    test_vector.push_back(&test_array[0]);
    std::cout << test_vector[0]->get_x() << test_vector[0]->get_y() << test_vector[0]->get_z() << "\n\n";

    test_vector.push_back(&test_array[2]);
    std::cout << test_vector[0]->get_x() << test_vector[0]->get_y() << test_vector[0]->get_z() << "\n";
    std::cout << test_vector[1]->get_x() << test_vector[1]->get_y() << test_vector[1]->get_z() << "\n\n";

    test_vector.erase(test_vector.begin());
    test_vector.shrink_to_fit();
    std::cout << test_vector[0]->get_x() << test_vector[0]->get_y() << test_vector[0]->get_z() << "\n\n";

    std::vector<Test*> v2;
    v2 = pass_vector(test_vector);
    std::cout << v2[0]->get_x() << v2[0]->get_y() << v2[0]->get_z() << "\n\n";
   
    test_vector.push_back(&test_array[1]);
    test_vector.push_back(&test_array[0]);

    test_vector = pass_vector(test_vector);
    test_vector.shrink_to_fit();

    for (auto i = test_vector.begin(); i != test_vector.end(); i++) {
        std::cout << (*i)->get_x() << (*i)->get_y() << (*i)->get_z() << "\n";
    }
    

    return 0;
}
