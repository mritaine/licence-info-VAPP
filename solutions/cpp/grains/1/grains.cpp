#include "grains.h"

namespace grains {

// TODO: add your solution here
    unsigned long long square(int num){
        unsigned long long grain = 1;
        while (num > 1){
            grain = grain * 2;
            num -= 1;
        }
        return grain;
    }
    unsigned long long total(){
        unsigned long long grain = 1;
        unsigned long long total_grain = 1;
        int num = 64;
        while (num>1){
            grain = grain * 2;
            total_grain = total_grain + grain;
            num -=1;
        }
        return total_grain;
    }
}  // namespace grains
