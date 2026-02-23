#include "triangle.h"
#include <stdexcept>

namespace triangle {

triangle::flavor kind(double a, double b, double c) {
    if (!((a + b) >= c) || !((a + c) >= b) || !((b + c) >= a)) {
        throw std::domain_error("Triangle Inequality Violation");
    } else if (a + b + c == 0) {
        throw std::domain_error("All Sides Are Length of Zero");
    } else if (a < 0 || b < 0 || c < 0) {
        throw std::domain_error("Triangles With Negative Sides Are Illegal");
    }

    if (a == b && a == c) {
        return triangle::flavor::equilateral;
    } else if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a)) {
        return triangle::flavor::isosceles;
    } else {
        return triangle::flavor::scalene;
    }
}

}  // namespace triangle
