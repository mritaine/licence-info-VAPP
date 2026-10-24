#include "hamming.h"
#include <string>
#include <stdexcept>
namespace hamming {

// TODO: add your solution here
    int compute(std::string strand1, std::string strand2){
        if (strand1.length() != strand2.length()){
            throw std::domain_error("non");
        }
        int hammer = 0;
        int index = 0;
        for (char letter : strand1){
            hammer = hammer + (letter != strand2[index]);
            index = index + 1;
        }
        return hammer;
        }
    }  // namespace hamming
