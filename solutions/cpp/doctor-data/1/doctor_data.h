#pragma once
#include <string>

namespace star_map {

enum class System {AlphaCentauri, BetaHydri, DeltaEridani, EpsilonEridani, Omicron2Eridani, Sol};

}

namespace heaven {

class Vessel {
    public:
        std::string name{};
        int generation{};
        int busters{};
        star_map::System current_system{};

        Vessel(std::string name, int generation, star_map::System current_system = star_map::System::Sol);

        Vessel replicate(std::string name);
        void make_buster();
        bool shoot_buster();
};

std::string get_older_bob(Vessel v1, Vessel v2);
bool in_the_same_system(Vessel v1, Vessel v2);

}