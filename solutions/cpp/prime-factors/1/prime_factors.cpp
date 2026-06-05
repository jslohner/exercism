#include "prime_factors.h"

namespace prime_factors {
    const std::vector<long long> of(long long num) {
        std::vector<long long> factors;
        long long divisor = 2;
        while (num > 1) {
            if (num % divisor != 0) {
                divisor++;
                continue;
            }
            num /= divisor;
            factors.push_back(divisor);
        }
        return factors;
    }
}  // namespace prime_factors
