#pragma once
#include <iostream>
#include <map>
#include <string>
#include <unordered_set>
#include <array>

namespace allergies {
    class allergy_test {
        private:
            std::unordered_set<std::string> allergies;
        public:
            allergy_test(int n);
            bool is_allergic_to(const std::string& allergy) const;
            const std::unordered_set<std::string>& get_allergies() const;
    };
}  // namespace allergies
