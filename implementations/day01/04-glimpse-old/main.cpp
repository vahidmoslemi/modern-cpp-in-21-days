// C++98 style. Correct, and more capable than its reputation — but wordy.
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

// The sorting rule needs a name and a home, far from the call that uses it,
// because C++98 had no way to write a small function on the spot.
bool longer_first(const std::string& a, const std::string& b) {
    return a.size() > b.size();
}

int main() {
    std::vector<std::string> names;
    names.push_back("Ada");          // one call per element
    names.push_back("Grace");
    names.push_back("Bjarne");
    names.push_back("Margaret");

    std::sort(names.begin(), names.end(), longer_first);

    // Spell out the iterator type the compiler already knows.
    for (std::vector<std::string>::const_iterator it = names.begin();
         it != names.end(); ++it) {
        std::cout << *it << " (" << it->size() << ")\n";
    }
}
