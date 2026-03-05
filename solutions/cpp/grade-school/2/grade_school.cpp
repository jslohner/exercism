#include "grade_school.h"
#include <algorithm>

namespace grade_school {
    const std::map<int, std::vector<std::string>> school::roster() const { return roster_; }
    void school::add(std::string name, int grade) {
        if (this->roster_.count(grade) == 0) {
            this->roster_[grade] = {};
        }
        this->roster_[grade].push_back(name);
        std::sort(this->roster_[grade].begin(), this->roster_[grade].end()); 
    }
    const std::vector<std::string> school::grade(int grade_num) const {
        const auto grade_list = this->roster_.find(grade_num);
        if (grade_list == this->roster_.end()) {
            return {};
        }
        return grade_list->second;
    }
}  // namespace grade_school
