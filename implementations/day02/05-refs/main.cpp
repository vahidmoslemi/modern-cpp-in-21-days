#include <iostream>
#include <string>

int main() {
    std::string original{"draft"};
    std::string& alias = original;   // alias IS original, under another name

    alias += " v2";                  // modifies original
    std::cout << original << "\n";   // prints: draft v2

    std::string copy = original;     // no &: an independent duplicate
    copy += " (copy)";               // original unaffected
    std::cout << original << " | " << copy << "\n";
}
