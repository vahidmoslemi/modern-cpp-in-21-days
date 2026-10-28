#include <cstdint>
#include <iostream>

int main() {
    std::int32_t  file_id   = -7;          // exactly 32 bits, signed
    std::uint64_t byte_count = 9'000'000'000; // exactly 64 bits, unsigned
    //                          ^ digit separators (') aid readability

    std::cout << "id: "    << file_id
              << ", bytes: " << byte_count << "\n";
    std::cout << "int is "  << sizeof(int)    << " bytes here, "
              << "int64_t is " << sizeof(std::int64_t) << " everywhere.\n";
}
