#include "robot_name.h"

namespace robot_name {
    int count = 0;
    std::string robot::name() const { return this->name_; }
    void robot::generate_name() {
        count++;
        std::srand(std::time(nullptr) + count);

        this->name_ = "";
        for (int i = 0; i < 2; ++i) {
            this->name_.push_back(letters[std::rand() % 26]);
        }
        this->name_ += std::to_string((std::rand() % 900) + 100);
    }
    void robot::reset() { robot::generate_name(); }
}  // namespace robot_name
