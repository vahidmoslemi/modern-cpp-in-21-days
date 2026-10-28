#include <iostream>

int main() {
    const double vat_rate{0.19};       // set once, trusted everywhere after
    const int    net_cents{4'999};

    // vat_rate = 0.21;                // ERROR: assignment of read-only variable

    const int vat   = static_cast<int>(net_cents * vat_rate);
    const int gross = net_cents + vat;
    //        ^ even intermediate results: const unless they must change

    std::cout << "net "   << net_cents << "  vat " << vat
              << "  gross " << gross << " cents\n";
}
