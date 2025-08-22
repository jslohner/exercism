#include "doctor_data.h"

heaven::Vessel::Vessel(std::string name, int generation, star_map::System current_system) {
    this->name = name;
    this->generation = generation;
    this->current_system = current_system;
}

heaven::Vessel heaven::Vessel::replicate(std::string name) {
    heaven::Vessel replicated(name, this->generation++, this->current_system);
    return replicated;
}

void heaven::Vessel::make_buster() {this->busters++;}
bool heaven::Vessel::shoot_buster() {this->busters--; return true;}

std::string heaven::get_older_bob(heaven::Vessel v1, heaven::Vessel v2) {
    if (v2.generation < v1.generation) return v2.name;
    return v1.name;
};
bool heaven::in_the_same_system(heaven::Vessel v1, heaven::Vessel v2) { return v1.current_system == v2.current_system; };