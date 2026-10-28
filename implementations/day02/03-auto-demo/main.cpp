#include <iostream>
#include <string>
#include <vector>

int main() {
    auto count = 10;                 // int
    auto price = 9.99;               // double
    auto name  = std::string{"Ada"}; // std::string, stated explicitly on the right

    std::vector<std::string> team{"Ada", "Grace", "Bjarne"};

    // The best reason for auto: types that are long or nearly unwritable.
    for (auto it = team.begin(); it != team.end(); ++it) {
        //  ^ spares you: std::vector<std::string>::iterator
        std::cout << *it << " ";
    }
    std::cout << "\n" << name << " x" << count << " @ " << price << "\n";
}
