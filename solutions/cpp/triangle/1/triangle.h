#pragma once
#include <stdexcept>
#include <string>

namespace triangle {
    enum flavor {
        equilateral,
        isosceles,
        scalene
    };
// TODO: add your solution here
    flavor kind(float A,float B,float C);
}  // namespace triangle
