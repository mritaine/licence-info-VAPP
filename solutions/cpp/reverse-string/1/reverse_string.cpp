#include "reverse_string.h"
#include <string>

namespace reverse_string {

// TODO: add your solution here
    std::string reverse_string(std::string word){
        std::string reverse = "";
        for (char letter : word){
            reverse = letter + reverse;
        }
        return reverse;
    }
}  // namespace reverse_string