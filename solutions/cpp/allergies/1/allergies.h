#pragma once
#include <bitset>
#include <string>
#include <vector>
#include <unordered_set>
namespace allergies {

    class allergy_test{
        private :
        std::bitset<8> allergies;
        std::unordered_set<std::string> allergies_list();
        public:
        allergy_test(int score);
        bool is_allergic_to(std::string tested);
        std::unordered_set<std::string> get_allergies();
    };
}  