#include "atbash_cipher.h"
#include <string>
namespace atbash_cipher {
    const std::string plain = "abcdefghijklmnopqrstuvwxyz123456789";
    const std::string cipher = "zyxwvutsrqponmlkjihgfedcba123456789";
    std::string encode(const std::string code){
        std::string encoded = "";
        for (unsigned i = 0;i<code.size();i++){
            for (unsigned j = 0; j<plain.size();j++){
                if (std::tolower(code[i]) == plain[j]){
                    if(encoded.size()%6 == 5) {
                    encoded += ' ';
                    }
                    encoded += cipher[j];
                }
            }
        }
    return encoded;
    }
    std::string decode(const std::string code){
        std::string encoded = "";
        for (unsigned i = 0;i<code.size();i++){
            for (unsigned j = 0; j<cipher.size();j++){
                if (code[i] == cipher[j]){
                    encoded = encoded + plain[j];
                }
            }
        }
    return encoded;
    }
}