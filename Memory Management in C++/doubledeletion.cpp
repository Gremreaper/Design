
#include <iostream>

int main() {
    int* ptr = new int(40);
    delete ptr;
    delete ptr; // Undefined behavior: double deletion
    return 0;
}