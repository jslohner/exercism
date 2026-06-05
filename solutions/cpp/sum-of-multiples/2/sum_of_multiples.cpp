#include "sum_of_multiples.h"

namespace sum_of_multiples {
    long to(const std::vector<int>& items, int level) {
        std::unordered_set<int> multiples;
        for (const int& base : items) {
            for (int m = base; m < level; m += base) {
                multiples.insert(m);
            }
        }
        return accumulate(multiples.begin(), multiples.end(), 0);
    }
}  // namespace sum_of_multiples
