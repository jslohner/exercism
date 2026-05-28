#include "grains.h"

namespace grains {
    std::uint64_t square(int s_num) {
        return (uint64_t)1<<(s_num-1);
    }

    std::uint64_t total() {
        std::uint64_t result = 1;
        for(int i = 2; i <= 64; i++) {
            result += square(i);
        }
        return result;
    }
}  // namespace grains
