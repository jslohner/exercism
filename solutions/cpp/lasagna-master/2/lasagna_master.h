#pragma once
#include <iostream>
#include <string>

namespace lasagna_master {

struct amount {
    int noodles;
    double sauce;
};

int preparationTime(std::vector<std::string> layers, int layer_prep_time = 2);
amount quantities(std::vector<std::string> layers);
void addSecretIngredient(std::vector<std::string> &my_ingredients, const std::vector<std::string> &friends_ingredients);
void addSecretIngredient(std::vector<std::string> &my_ingredients, const std::string &secret_ingredient);
std::vector<double> scaleRecipe(const std::vector<double> &quantities, int new_portions);

}  // namespace lasagna_master
