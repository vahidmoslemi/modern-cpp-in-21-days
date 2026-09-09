// hello.cpp — first contact with modern C++ (built at C++23)
#include <iostream>   // stream I/O: std::cout
#include <string>     // std::string

int main() {
    std::string who = "professional C++";
    std::cout << "Hello, " << who << "!\n";
    return 0;   // 0 = success; the OS sees this exit code
}
