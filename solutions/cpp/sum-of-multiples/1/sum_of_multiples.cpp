#include "sum_of_multiples.h"
#include <numeric>

namespace sum_of_multiples {
    long to(item_list items, long level) {
        set<long> multiples;
        for (const int& base : items) {
            for (int i = base; i < level; i += base) {
                multiples.insert(i);
            }
        }
        return accumulate(multiples.begin(), multiples.end(), 0);
    }
}  // namespace sum_of_multiples
