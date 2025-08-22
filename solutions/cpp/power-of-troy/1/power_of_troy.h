#pragma once

#include <string>
#include <memory>
#include <iostream>

namespace troy {

struct artifact {
    // constructors needed (until C++20)
    artifact(std::string name) : name(name) {}
    std::string name;
};

struct power {
    // constructors needed (until C++20)
    power(std::string effect) : effect(effect) {}
    std::string effect;
};

struct human {
    // human(artifact possession, power own_power, power influenced_by) : possession(possession), own_power(own_power), influenced_by(influenced_by) {}
    std::unique_ptr<artifact> possession;
    std::shared_ptr<power> own_power;
    std::shared_ptr<power> influenced_by;
};

void give_new_artifact(human &human_ref, std::string new_artifact);
void exchange_artifacts(std::unique_ptr<artifact> &p1, std::unique_ptr<artifact> &p2);
void manifest_power(human &human_ref, std::string new_power);
void use_power(human &caster, human &target);
int power_intensity(human &check_human);

}  // namespace troy
