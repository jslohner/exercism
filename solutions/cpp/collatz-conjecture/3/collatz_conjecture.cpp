#include "collatz_conjecture.h"
#include <stdexcept>

namespace collatz_conjecture {

int steps(int val) {
    if (val <= 0) throw std::domain_error("Starting number must be positive integer.");
    int num_steps = 0;
    while (val != 1) {
        num_steps++;
        if (val % 2 == 0) {
            val = val / 2;
        } else {
            val = val * 3 + 1;
        }
    }
    return num_steps;
}

}  // namespace collatz_conjecture
