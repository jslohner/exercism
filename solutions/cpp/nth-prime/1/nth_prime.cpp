#include "nth_prime.h"
#include <cstddef>
#include <stdexcept>
#include <vector>
#include <cmath>

namespace nth_prime {

    int nth(int n) {
        if (n <= 0) throw std::domain_error("n must be a positive integer.");
        std::vector<int> primes = {2, 3};
        int current = 3;
        std::size_t check = n;
        while (primes.size() < check) {
            current++;
            if (current % 2 == 0) continue;
            int root = std::floor(std::sqrt(current));
            int next = 0;
            int test_idx = 0;
            while (primes[test_idx] <= root) {
                if (current % primes[test_idx] == 0) {
                    next = 0;
                    break;
                } else {
                    next = current;
                }
                test_idx++;
            }
            if (next > 0) primes.push_back(next);
        }
        return primes[n-1];
    }

}  // namespace nth_prime
