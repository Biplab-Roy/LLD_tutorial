#include <memory>
#include <iostream>
#include <thread>
#include <unistd.h>

int* f() {
    std::shared_ptr<int> a = std::make_shared<int>(2);
    std::cout << *(a.get()) << std::endl;
    return a.get();
}

int main() {
    int *b = f();
    std::cout << *b << std::endl;
}