#include "lasagna_master.h"

namespace lasagna_master {

int preparationTime(std::vector<std::string> layers, int layer_prep_time) { return layers.size() * layer_prep_time; }
amount quantities(std::vector<std::string> layers) {
    amount amount_info;
    amount_info.noodles = 0;
    amount_info.sauce = 0;
    for (auto layer : layers) {
        if (layer == "noodles") { amount_info.noodles += 50; }
        if (layer == "sauce") { amount_info.sauce += 0.2; }
    }
    return amount_info;
}
void addSecretIngredient(std::vector<std::string> &my_ingredients, const std::vector<std::string> &friends_ingredients) { my_ingredients.back() = friends_ingredients.back(); }
void addSecretIngredient(std::vector<std::string> &my_ingredients, const std::string &secret_ingredient) { my_ingredients.back() = secret_ingredient; }
std::vector<double> scaleRecipe(const std::vector<double> &quantities, int new_portions) {
    std::vector<double> new_quantities;
    for (auto q : quantities) {
        double one_portion = q / 2;
        new_quantities.push_back(one_portion * new_portions);
    }
    return new_quantities;
}

}  // namespace lasagna_master
