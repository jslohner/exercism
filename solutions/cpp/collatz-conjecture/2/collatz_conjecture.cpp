#include "collatz_conjecture.h"
#include <stdexcept>

namespace collatz_conjecture {

int steps(int val) {
    if (val <= 0) throw std::domain_error("Starting number must be positive integer.");
    int num_steps = 0;
    while (val != 1) {
        num_steps++;
        val = go_next(val);
    }
    return num_steps;
}

int go_next(int val) {
    if (val % 2 == 0) return val / 2;
    return val * 3 + 1;
}

}  // namespace collatz_conjecture
