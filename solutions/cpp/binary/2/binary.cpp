#include "binary.h"
#include <string>
#include <cmath>
#include <bitset>

namespace binary {

    int convert(std::string binaire){
        std::bitset<32> bits;
        int count = 0;
        for (unsigned i = 0; i<=32 ;i++){
            if (i < binaire.length() && binaire[i]-'0' > 1){
                return 0;
            }
            if (binaire[i] == '1'){
                bits.set(binaire.length() - count - 1);
            }
        count ++;
        }
    return bits.to_ulong();
    }
}  // namespace binary
