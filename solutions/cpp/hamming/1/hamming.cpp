#include "hamming.h"

namespace hamming {
    int compute(std::string a, std::string b) {
        if (a.length() != b.length()) {
            throw std::domain_error("String Length Differs");
        }
        int distance = 0;
        for (std::size_t i = 0; i < a.length(); i++) {
            if (a[i] != b[i]) {
                distance++;
            }
        }
        return distance;
    }
}  // namespace hamming
