#include <iostream>
#include <string>
#include <vector>

// Read-only access, no copy: const T& — the workhorse.
double average(const std::vector<double>& samples) {
    if (samples.empty()) return 0.0;
    double sum = 0.0;                       // must change → not const
    for (const double s : samples) sum += s;
    return sum / static_cast<double>(samples.size());
}

// Intentional modification: T& — visible in the signature.
void append_unit(std::string& label) {
    label += " ms";
}

int main() {
    const std::vector<double> latencies{12.5, 9.8, 15.2, 11.1};
    std::cout << "avg: " << average(latencies) << "\n";

    std::string label{"p99 latency"};
    append_unit(label);
    std::cout << label << "\n";
}
