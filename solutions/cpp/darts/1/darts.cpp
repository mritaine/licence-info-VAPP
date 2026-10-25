#include "darts.h"
#include <cmath>

namespace darts {
    double constexpr limite_ext = 10.0 ;// entre hors cible et dans partie extérieure
    double constexpr limite_mid = 5.0 ;// entre partie extérieure et partie centrale
    double constexpr limite_int = 1.0 ; // entre partie centrale et bullseye
    
    int score(double x, double y){
        double coord = std::sqrt((x*x)+(y*y));
        if (coord <= limite_int){
            return 10;
        }
        else if (coord <= limite_mid){
            return 5;
        }
        else if (coord <= limite_ext){
            return 1;
        }
        else {
            return 0;
        }
    }

}  // namespace darts
