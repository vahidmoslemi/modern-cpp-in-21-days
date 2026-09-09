// daysleft — how many days to finish the book?
// Usage: daysleft <total_pages> <pages_per_day>
#include <iostream>
#include <exception>   // std::exception — the base type we catch below
#include <string>

int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cerr << "usage: daysleft <total_pages> <pages_per_day>\n";
        return 1;                       // nonzero = error, for scripts/CI
    }

    int total = 0;
    int per_day = 0;
    try {
        total   = std::stoi(argv[1]);   // string → int; throws on garbage
        per_day = std::stoi(argv[2]);
    } catch (const std::exception&) {
        std::cerr << "error: both arguments must be whole numbers\n";
        return 1;
    }

    if (total <= 0 || per_day <= 0) {
        std::cerr << "error: both numbers must be positive\n";
        return 1;
    }

    // Integer ceiling division: 300 pages at 40/day = 8 days, not 7.
    const int days = (total + per_day - 1) / per_day;

    std::cout << "At " << per_day << " pages/day, you will finish "
              << total << " pages in " << days
              << (days == 1 ? " day.\n" : " days.\n");
}
