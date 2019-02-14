#include <iostream>
class test {
    public:
        test(int _id) {
            id = _id;
        };
        int id;
};

int main() {
    test test_0(0);
    test test_1(1);

    test *pointer_array[4];  
    pointer_array[0] = &test_0;
    pointer_array[1] = &test_1;
    pointer_array[2] = &test_0;
    pointer_array[3] = &test_1;

    int n = sizeof(pointer_array)/sizeof(pointer_array[0]);
    std::cout << n << std::endl;
    return 0;
}