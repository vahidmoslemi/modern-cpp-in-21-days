#include <iostream>

void swap_ints(int& a, int& b) {
    const int tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int x{1}, y{2};
    swap_ints(x, y);
    std::cout << x << " " << y << "\n";   // 2 1
}
