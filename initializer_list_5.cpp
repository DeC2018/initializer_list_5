#include <iostream>
#include <initializer_list>
#include <vector>

void foo(std::initializer_list<int> list) {
    std::cout << "list...\n";
}

void foo(const std::vector<int>& list) {
    std::cout << "vector...\n";
}

int main() {
    foo({});
    foo({ 1, 2, 3 });
    foo({ 1, 2, 3, 4, 5 });
    std::vector<int> temp { 1, 2, 3};
    foo(temp);
    foo(std::vector { 2, 3, 4});
}
