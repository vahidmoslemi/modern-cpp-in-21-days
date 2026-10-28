#include <iostream>
#include <string>

namespace metrics {                    // your library's territory
    // Scoped enum: enumerators live inside Unit, convert to int only explicitly.
    enum class Unit { millis, seconds, minutes };

    std::string to_string(Unit u) {
        switch (u) {
            case Unit::millis:  return "ms";
            case Unit::seconds: return "s";
            case Unit::minutes: return "min";
        }
        return "?";
    }

    namespace detail {                 // convention: internals, keep out
        constexpr int version = 3;
    }
}

int main() {
    const auto unit = metrics::Unit::seconds;   // qualified access
    std::cout << "unit: " << metrics::to_string(unit)
              << " (impl v" << metrics::detail::version << ")\n";
}
