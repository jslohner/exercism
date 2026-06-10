#pragma once
#include <string>
#include <random>
#include <ctime>
#include <unordered_set>

namespace robot_name {
    extern int count;
    extern std::unordered_set<std::string> names_list;

    class robot {
        private:
            std::string name_;
        public:
            robot() {
                this->generate_name();
            }
            std::string name() const;
            void generate_name();
            void reset();
    };
}  // namespace robot_name
