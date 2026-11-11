#include "bob.h"
#include <string>
#include <stdexcept>

namespace bob {
    unsigned long first_real(std::string sentence){
        std::string dico ="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
        if (sentence.length() < 3||sentence == "") {
            return 0;
        }
        for (unsigned long i = 2; i < sentence.length(); i ++){
            for (unsigned long j = 0; j < dico.length(); j++){
                if (dico[j] == sentence[i]){
                    return i;
                }
            }
        }
        return 0;
        // si il n'y a pas de lettre il ne peut pas y avoir de majuscule donc pas besoin de vérifier d'index pour             la fonction upper().
    }
    int last_real(std::string sentence){
        for (int i = sentence.length() - 1; i>0; i --){
            if (sentence [i] != ' '){
                return i;
            }
        }
        return 0;
    }
    bool Upper (char letter){
        std::string dico = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        for (char i : dico){
            if (i == letter){
                return true;
            }
        }
        return false;
    }
    bool silence (std::string phrase){
        int characters = phrase.length();
        unsigned long silent_char = 0;
        for (int i = 0; i < characters; i += 1){
            if (phrase[i] == ' ' || phrase[i] == '\t' ||phrase[i] == '\n' ||phrase[i] == '\r'){
                silent_char += 1;
            }
        }
        return silent_char == phrase.length();
    }
    std::string hey (std::string sentence){
        int letter_index = first_real(sentence);
        int last_index = last_real(sentence);
        int length = sentence.length() -1;
        bool yell = Upper(sentence[letter_index]);
        if (yell && sentence[length] == '?'){
            return "Calm down, I know what I'm doing!";
        }
        else if (yell){
            return "Whoa, chill out!";
        }
        else if (sentence[last_index] == '?'){
            return "Sure.";
        }
        else if (sentence == "" || silence(sentence)){
            return "Fine. Be that way!";
        }
        else {
            return "Whatever.";
        }
    }
}  // namespace bob