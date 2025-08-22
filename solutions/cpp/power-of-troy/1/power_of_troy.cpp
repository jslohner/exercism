#include "power_of_troy.h"

namespace troy {

void give_new_artifact(human &human_ref, std::string new_artifact) { human_ref.possession = std::make_unique<artifact>(artifact {new_artifact}); }
void exchange_artifacts(std::unique_ptr<artifact> &p1, std::unique_ptr<artifact> &p2) { std::swap(p1, p2); }
void manifest_power(human &human_ref, std::string new_power) { human_ref.own_power = std::make_shared<power>(power {new_power}); }
void use_power(human &caster, human &target) { target.influenced_by = caster.own_power; }
int power_intensity(human &check_human) {
    if (check_human.own_power == nullptr) return 0;
    return check_human.own_power.use_count();
}

}  // namespace troy
