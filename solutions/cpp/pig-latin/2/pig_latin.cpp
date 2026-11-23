#include "pig_latin.h"
#include <string>

namespace pig_latin {
    //déclaration des constantes :
    const std::string rule1a = "yt";
    const std::string rule1b = "xr";
    const std::string rule3 = "qu";
    const std::string rule4 = "y";
    const std::string vowels = "aeiou";
    const std::string consonants = "bcdfghjklmnpqrstvwxz";

    // fonction de vérification du nombres de consonnes de départ (terminée)
    int c_verif (std::string word){
        int consonant_start = 0;
        for (char c : word){
            if (consonants.find(c) == std::string::npos){
                break;
            }
        consonant_start ++;
        }
        return consonant_start;
    }

    // fonction venant alimenter le switch (terminée)
    int guess_case (std::string word){
        std::string pre ="";
        std::string two_first = word.substr(0,2);
        if (vowels.find(word[0]) != std::string::npos ||two_first =="xr" || two_first=="yt"){
            return 1;
        }
        //ici ajouter 'y' à la variable consonnants causerait un probléme entre les moments ou il est considéré             comme une consonnes, et les moments ou il est considéré comme une limitation. Plusieurs solutions plus              sécurisées comme l'ajout d'une deuxième constante de consonnes serait plus adaptées.
        if (vowels.find(word[1])!= std::string::npos && word[0] == 'y' && word.size()>1 ){
            return 3;
        }
        for (char c : word){
            pre += c;
            //implementation de la régle 1
            if ( pre.find(rule1a) != std::string::npos || pre.find(rule1b) != std::string::npos){
                return 1;
            }
            //implementation de la régle 3
            else if (pre.find(rule3)!= std::string::npos){
                return 3;
            }
            //implementation de la régle 4
            else if (pre.find(rule4)!= std::string::npos && c_verif(word)>=1){
                return 4;
            }
            if (vowels.find(c) != std::string::npos){
                break;
            }
        }
        //implementation de la régle 2
        return 2;
    }
    
    //fonction de vérification du nombre de mots (terminée)
    int how_many (std::string sentence){
        int words = 1;
        for (char c : sentence){
            if (c == ' '){
                words ++;
            }
        }
        return words ;
    }

    //fonction principale (en cours)
    std::string translate (std::string sentence){
        unsigned j = 0;
        std::string new_sentence = "";
        for (int i = how_many(sentence); i > 0; i--){
            std::string word = "";
            while (j < sentence.size() && sentence[j] != ' '){
                word += sentence[j];
                j++;
            }
            j++;
            std::string start;
            switch(guess_case(word)){
                case 1:
                    break;
                case 2:
                    start = word.substr(0,c_verif(word));
                    word.erase(0,c_verif(word));
                    word += start;
                    break;
                case 3:
                    start = word.substr(0,c_verif(word)+1);
                    word.erase(0,c_verif(word)+1);
                    word += start;
                    break;
                case 4:
                    start = word.substr(0,c_verif(word));
                    word.erase(0,c_verif(word));
                    word += start;
                    break;
            }
            //principe DRY, le "ay" est ajouté à la fin dans tous les cas, il est donc extrait du switch
            word +="ay";
            if(! new_sentence.empty()){
                new_sentence += ' ';
            }
            new_sentence += word;
        }
        return new_sentence;
    }
}