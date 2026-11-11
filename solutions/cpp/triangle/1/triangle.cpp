#include "triangle.h"
#include <stdexcept>
#include <string>

namespace triangle {
    flavor kind(float A,float B,float C){
        if (A == 0||B == 0||C == 0||A+B < C||A+C < B||C+B < A){
            throw std::domain_error("");
        }
        if (A==B && B==C){
            return flavor::equilateral;
        }
        if(A!=B && B != C && A!=C){
            return flavor::scalene;
        }
        else {
            return flavor::isosceles;
        }
    }
}  // namespace triangle
