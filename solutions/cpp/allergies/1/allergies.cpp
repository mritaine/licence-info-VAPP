#include "allergies.h"
#include <bitset>
#include <string>
#include <vector>
#include <unordered_set>
namespace allergies {
    
    //here, the use of a vector instead of an unordered_set is unavoidable, as the index of each allergy is needed for the allergy_test::allergies_list() method. The variable is transformed into a const for security reason, as there is no reason for it to be modified through the exercise.
   const std::vector<std::string> allergies_set ={"eggs","peanuts","shellfish","strawberries","tomatoes","chocolate","pollen","cats"};

    // inspired by other exercism users' solutions to the pangram problem, I used std::bitset as a mean to raise several boolean flags. In this exercise the value of each allergy corresponds to the value of a bit in a byte. Thus, I decided to use the bitset in order to record every possibilities in a single byte. Assigning the size 8 to the bitset allows any number to be introduced in the variable without ever going over the first byte, thus replacing the modulo operator.
    allergy_test::allergy_test(int score) : allergies(score){
    }
    
    // The use of a private helper function avoids code duplication between allergy_test::is_allergic_to and allergy_test::get_allergies() (according to the DRY principle), and keeps the allergies variable encapsulated in the private section.
    std::unordered_set<std::string> allergy_test::allergies_list(){
        std::unordered_set<std::string> list = {};
        for (int i = 0; i <8; i++){
            if (allergies[i]){
                list.insert(allergies_set[i]);
            }
        }
        return list;
    }
    
    std::unordered_set<std::string> allergy_test::get_allergies(){
        return allergies_list();
    }

    bool allergy_test::is_allergic_to(std::string tested){
        return allergies_list().count(tested) != 0;
    }
}