#pragma once

namespace triangle {

enum flavor {
    equilateral,
    isosceles,
    scalene
};

triangle::flavor kind(double a, double b, double c);

}  // namespace triangle
