#include <iostream>

int* danglingExample() {
    int* ptr = new int(30);
    delete ptr; // Memory is deallocated
    return ptr; // ptr is now dangling
}

int main() {
    int* dPtr = danglingExample();
    std::cout << "Dangling pointer value: " << *dPtr << std::endl; // Undefined behavior
    return 0;
}
