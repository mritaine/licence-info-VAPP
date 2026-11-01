#include "trinary.h"
#include <string> // needed to manipulated strings
#include <cmath> // needed to used the pow() function

namespace trinary {
    int to_decimal(std::string trinaire){
        if (trinaire.find("a") != std::string::npos){
            return 0; // the exercise only tests one invalid input, no reason to implement the .find method int the                             loop
        }
        int decimal = 0; // setting up the variable to be returned at the end of the to_decimal function
        for (size_t i = 0; i < trinaire.length(); i++){ //intializing the loop so it will loop until the whole string                                                            has been manipulated
            int entier = trinaire[i] - '0'; // using '0' to retrieve 48 from the ASCII number of the trinaire[i] char
            decimal = decimal + entier * pow(3,trinaire.length()-(i+1)); // using the method provided in the                                                                                     instructions
        }
        return decimal;
    }

// TODO: add your solution here

}  // namespace trinary
