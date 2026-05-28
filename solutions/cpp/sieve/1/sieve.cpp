#include "sieve.h"

namespace sieve {

    const std::vector<int> primes(int n) {
        std::vector<int> rv;
        if (n <= 1) return rv;
        std::map<int, bool> prime_map;
        for (int i = 2; i <= n; i++) {
            prime_map[i] = false;
        }
        for (int i = 2; i <= n; i++) {
            if (prime_map[i]) continue;
            rv.push_back(i);
            for (int j = i + 1; j <= n; j++) {
                if (j % i == 0) {
                    prime_map[j] = true;
                }
            }
        }
        return rv;
    }

}  // namespace sieve
