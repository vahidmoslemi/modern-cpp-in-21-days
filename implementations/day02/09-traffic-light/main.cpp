#include <iostream>
#include <string>

namespace traffic {
    enum class Light { red, amber, green };

    Light next(Light l) {
        switch (l) {
            case Light::red:   return Light::green;
            case Light::green: return Light::amber;
            case Light::amber: return Light::red;
        }
        return Light::red;
    }

    std::string to_string(Light l) {
        switch (l) {
            case Light::red:   return "red";
            case Light::amber: return "amber";
            case Light::green: return "green";
        }
        return "?";
    }
}

int main() {
    auto l = traffic::Light::red;
    for (int i = 0; i < 4; ++i) {
        std::cout << traffic::to_string(l) << "\n";
        l = traffic::next(l);
    }
}
