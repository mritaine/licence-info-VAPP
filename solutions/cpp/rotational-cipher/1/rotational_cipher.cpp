#include "rotational_cipher.h"
#include <string>

namespace rotational_cipher {
    std::string rotate(std::string sentence, int key){
        std::string rotated = "";
        key %= 26;
        for(char letter : sentence){
            if ((letter >= 'a' && letter <= 'z' ) || (letter >= 'A' && letter <= 'Z')){
                if ((letter <= 'z' && letter + key > 'z')|| (letter <= 'Z' && letter + key > 'Z')){
                    letter -= 26;
                }
                rotated = rotated + static_cast<char>(letter + key);
            }
            else{
                rotated = rotated + letter;
            }
            
        }
        return rotated;
    }
} 
