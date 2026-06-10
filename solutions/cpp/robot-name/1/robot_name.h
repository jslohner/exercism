#pragma once
#include <string>
#include <random>

namespace robot_name {
    static char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    extern int count;
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
