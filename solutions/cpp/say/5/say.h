#pragma once
#include <vector>
#include <string>

namespace say {

    extern std::vector<std::string> ones;
    extern std::vector<std::string> tens;
    extern std::vector<std::string> multi;
    std::string get_block(std::string section, int idx);
    std::string in_english(unsigned long long num);

}  // namespace say
