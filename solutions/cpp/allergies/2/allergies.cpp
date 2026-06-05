#include "allergies.h"

namespace allergies {
    static const std::array<std::string, 8> allergy_list = {
        "eggs",
        "peanuts",
        "shellfish",
        "strawberries",
        "tomatoes",
        "chocolate",
        "pollen",
        "cats"
    };
    allergy_test::allergy_test(int n) {
        for (std::size_t i = 0; i < allergy_list.size(); ++i) {
            if (n & (1 << i)) {
                this->allergies.emplace(allergy_list[i]);
            }
        }
    }
    bool allergy_test::is_allergic_to(const std::string& allergy) const { return this->allergies.find(allergy) != this->allergies.end(); }
    const std::unordered_set<std::string>& allergy_test::get_allergies() const { return this->allergies; }
}  // namespace allergies
