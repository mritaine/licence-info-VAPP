#include "rna_transcription.h"
#include <string>

namespace rna_transcription {
    char to_rna(char nucleotid){
        switch(nucleotid){
            case 'G':
                return 'C';
            case 'C' :
                return 'G';
            case 'A' :
                return 'U';
            case 'T' :
                return 'A';
            default :
                return 'o';
        }
    }
    std::string to_rna(std::string strand){
        std::string rna = "";
        for ( char letter : strand){
            rna = rna + to_rna(letter);
        }
        return rna;
    }
// TODO: add your solution here

}  // namespace rna_transcription
