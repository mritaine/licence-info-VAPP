#include "collatz_conjecture.h"
#include <stdexcept>
namespace collatz_conjecture {
    int steps(int num){
        int count = 0;
        if (num < 1){
            throw std::domain_error("");
        }
        while (num != 1){
            if (num % 2 == 0){
                num = num / 2;
            }
            else if (num % 2 != 0){
                num = num * 3 + 1;
            }
            count ++;
        }
        return count;
    }
}
