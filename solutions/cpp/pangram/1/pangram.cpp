#include "pangram.h"
#include <map>

namespace pangram {
    bool is_pangram(std::string sentence) {
        std::map<char, int> dict = {};
        for (char c  = 'a'; c <= 'z'; ++c) {
            dict[c] = 0;
        }
        for (char c : sentence) {
            dict[std::tolower(c)]++;
        }

        for (const auto pair : dict) {
            if (pair.second == 0) {
                return false;
            }
        }

        return true;
    }
}  // namespace pangram
