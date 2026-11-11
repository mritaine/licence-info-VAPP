#pragma once
#include <string>
#include <stdexcept>

namespace bob {
    int last_real(std::string sentence);
    unsigned long first_real(std::string sentence);
    bool Upper (char letter);
    bool silence (std::string phrase);
    std::string hey (std::string sentence);

}  // namespace bob
