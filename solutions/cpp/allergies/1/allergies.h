#pragma once
#include <iostream>
#include <map>
#include <string>
#include <unordered_set>

namespace allergies {
    class allergy_test {
        private:
            std::map<unsigned int, std::string> a_types = {
                {1, "eggs"},
                {2, "peanuts"},
                {4, "shellfish"},
                {8, "strawberries"},
                {16, "tomatoes"},
                {32, "chocolate"},
                {64, "pollen"},
                {128, "cats"},
            };
            std::unordered_set<std::string> allergies;
        public:
            allergy_test(int n) {
                unsigned int skip = 256;
                while (n > 255) {
                    n -= skip;
                    skip *= 2;
                }
                for (auto it = a_types.rbegin(); it != a_types.rend(); ++it) {
                    int diff = n - it->first;
                    if (diff > -1) {
                        allergies.emplace(it->second);
                        n -= it->first;
                    }
                }
            }
            bool is_allergic_to(std::string allergy);
            std::unordered_set<std::string> get_allergies();
    };
}  // namespace allergies
