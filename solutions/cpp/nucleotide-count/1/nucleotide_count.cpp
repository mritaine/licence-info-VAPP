#include "nucleotide_count.h"
#include <string>
#include <map>
#include <stdexcept>
namespace nucleotide_count {
    std::map<char,int> count(std::string sequence){
        std::map<char,int> nucleotides;
        nucleotides['A'] = 0;
        nucleotides['C'] = 0;
        nucleotides['G'] = 0;
        nucleotides['T'] = 0;
        for (char letter : sequence){
            if (nucleotides.count(letter) == 0){
                throw std::invalid_argument("");
            }
            nucleotides[letter] ++;
        }
        return nucleotides;
    }
}