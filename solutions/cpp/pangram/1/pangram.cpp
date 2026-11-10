#include "pangram.h"
#include <string>
namespace pangram {

// TODO: add your solution here
    bool contains(char dico, std::string dicté){
        int len = dicté.length();
        for (int i = 0; i < len; i++){
            if (dico == dicté[i]){
                return true;
            }
        }
        return false;
    }
    bool is_pangram(std::string sentence){
        std::string alpha = "abcdefghijklmnopqrstuvwxyz";
        std::string ALPHA = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int count = 0;
        for (int i = 0; i < 26; i++){
            if (contains(alpha[count],sentence)||contains(ALPHA[count], sentence)){
                count ++;
                continue;
            }
        break;
        }
        return count == 26;
    }
}  // namespace pangram
