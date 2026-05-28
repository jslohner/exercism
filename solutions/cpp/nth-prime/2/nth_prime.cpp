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
            int is_prime = false;
            int test_idx = 0;
            while (primes[test_idx] <= root) {
                if (current % primes[test_idx] == 0) {
                    is_prime = false;
                    break;
                } else {
                    is_prime = true;
                }
                test_idx++;
            }
            if (is_prime) primes.push_back(current);
        }
        return primes[n-1];
    }

}  // namespace nth_prime
