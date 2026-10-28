#include <iostream>
#include <vector>

int main() {
    int    answer{42};              // brace init of a fundamental type
    double ratio{0.5};
    std::vector<int> primes{2, 3, 5, 7};   // works for containers too

    int truncated = 7.9;            // legal! silently becomes 7
    // int refused{7.9};            // ERROR: narrowing — compiler stops you

    int zero{};                     // empty braces = zero-initialize
    std::cout << answer << " " << ratio << " " << primes.size()
              << " " << truncated << " " << zero << "\n";
}
