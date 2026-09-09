#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> names{"Ada", "Grace", "Bjarne", "Margaret"};

    // Algorithm + lambda instead of a hand-written sorting loop.
    std::sort(names.begin(), names.end(),
              [](const std::string& a, const std::string& b) {
                  return a.size() > b.size();   // longest first
              });

    for (const auto& name : names) {            // range-for, no index bugs
        std::cout << name << " (" << name.size() << ")\n";
    }
}
