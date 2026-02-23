#include "grains.h"

namespace grains {

unsigned long long int square(int s_num) {
    int p = 1;
    unsigned long long int grains = 1;

    while (p < s_num) {
        p++;
        grains = grains * 2;
    }

    return grains;
};

unsigned long long int total() {
    int s_num = 0;
    unsigned long long int t = 0;

    while (s_num < 64) {
        s_num++;
        t += grains::square(s_num);
    }

    return t;
};

}  // namespace grains
