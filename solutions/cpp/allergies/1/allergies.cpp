#include "allergies.h"

namespace allergies {
    bool allergy_test::is_allergic_to(std::string allergy) { return this->allergies.find(allergy) != this->allergies.end(); }
    std::unordered_set<std::string> allergy_test::get_allergies() { return this->allergies; }
}  // namespace allergies
