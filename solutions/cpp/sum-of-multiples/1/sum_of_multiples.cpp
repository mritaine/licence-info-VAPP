#include "sum_of_multiples.h"
#include <string>
#include <vector>
namespace sum_of_multiples {
// TODO: add your solution here
    int to(std::vector<int> magic, int level){
        std::vector<int> multiples = {};
        for (int i : magic){
            for (int j = i; j < level; j += i){
                if (std::find(multiples.begin(),multiples.end(),j) == multiples.end()){
                    multiples.push_back(j);
                }
            }
        }
        int total = 0;
        for (int i : multiples){
            total += i;
        }
        return total;
    }
}  // namespace sum_of_multiples