// statline — min/max/mean of latency samples given in milliseconds.
// Usage: statline 12.5 9.8 15.2 11.1
#include <cstdint>
#include <iostream>
#include <string>
#include <vector>

namespace statline {

enum class Verdict { fast, acceptable, slow };

struct Stats {
    double        min{};
    double        max{};
    double        mean{};
    std::uint32_t count{};
};

// const&: read a possibly large vector without copying it.
Stats compute(const std::vector<double>& samples) {
    Stats s{};
    s.count = static_cast<std::uint32_t>(samples.size());
    if (samples.empty()) return s;

    s.min = samples.front();
    s.max = samples.front();
    double sum = 0.0;
    for (const double v : samples) {
        if (v < s.min) s.min = v;
        if (v > s.max) s.max = v;
        sum += v;
    }
    s.mean = sum / static_cast<double>(s.count);
    return s;
}

Verdict judge(const double mean_ms) {
    if (mean_ms < 10.0)  return Verdict::fast;
    if (mean_ms < 50.0)  return Verdict::acceptable;
    return Verdict::slow;
}

std::string to_string(const Verdict v) {
    switch (v) {
        case Verdict::fast:       return "fast";
        case Verdict::acceptable: return "acceptable";
        case Verdict::slow:       return "slow";
    }
    return "?";
}

} // namespace statline

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "usage: statline <ms> [<ms> ...]\n";
        return 1;
    }

    std::vector<double> samples;
    for (int i = 1; i < argc; ++i) {
        try {
            samples.push_back(std::stod(argv[i]));   // string → double
        } catch (const std::exception&) {
            std::cerr << "error: '" << argv[i] << "' is not a number\n";
            return 1;
        }
    }

    const auto stats = statline::compute(samples);
    std::cout << "samples: " << stats.count
              << "  min: "  << stats.min
              << "  max: "  << stats.max
              << "  mean: " << stats.mean << " ms  ("
              << statline::to_string(statline::judge(stats.mean)) << ")\n";
}
