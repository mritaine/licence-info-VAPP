#include "binary.h"
#include <string>
#include <cmath>

namespace binary {

    int convert(std::string binaire){
        int deci = 0;
        int power = 0;
        for (int i = binaire.length()-1; i>=0;i--){
            if (binaire[i]-'0' > 10){
                break;
            }
            deci += (binaire[i]-'0')*pow(2, power);
            power = power + 1;
        }
    return deci;
    }
}  // namespace binary
