#include <iostream>
#include <vector>

// Sum only the even numbers in a list.
int sum_of_evens(const std::vector<int>& values) {
    int total = 0;
    for (int v : values) {          // range-based for: visits each element
        if (v % 2 == 0) {
            total += v;             // ← set a breakpoint here
        }
    }
    return total;
}

int main() {
    std::vector<int> data{3, 8, 15, 4, 7, 10};
    std::cout << "Sum of evens: " << sum_of_evens(data) << "\n";
}
