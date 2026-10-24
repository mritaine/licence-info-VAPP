#include "protein_translation.h"
#include <string>
#include <vector>
namespace protein_translation {
    
// TODO: add your solution here
     std::vector<std::string> proteins(std::string arn){
        std::vector<std::string> protein;
        while (arn != ""){
            std::string codon = arn.substr(0,3);
            arn.erase(0,3);
            if (codon == "AUG"){
                protein.push_back("Methionine");
            }
            if (codon == "UUU" || codon == "UUC"){
                protein.push_back("Phenylalanine");
            }
            if (codon == "UUA" || codon == "UUG"){
                protein.push_back("Leucine");
            }
            if (codon == "UCU" || codon == "UCC" || codon == "UCA" || codon == "UCG"){
                protein.push_back("Serine");
            }
            if (codon == "UAU" || codon == "UAC"){
                protein.push_back("Tyrosine");
            }
            if (codon == "UGU" || codon == "UGC"){
                protein.push_back("Cysteine");
            }
            if (codon == "UGG"){
                protein.push_back("Tryptophan");
            }
            if (codon == "UAA" || codon == "UAG" || codon == "UGA"){
                break;
            }
        };
        return protein;
    }
    
}  // namespace protein_translation
