#include "robot_name.h"

namespace robot_name {
    static char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int count = 0;
    std::unordered_set<std::string> names_list = {};

    std::string robot::name() const { return this->name_; }

    void robot::generate_name() {
        count++;
        std::srand(std::time(nullptr) + count);

        while (true) {
            this->name_ = "";

            for (int i = 0; i < 2; ++i) {
                this->name_.push_back(letters[std::rand() % 26]);
            }
            this->name_ += std::to_string((std::rand() % 900) + 100);

            if (names_list.find(this->name_) == names_list.end()) {
                names_list.emplace(this->name_);
                break;
            }
        }
    }

    void robot::reset() { robot::generate_name(); }
}  // namespace robot_name
