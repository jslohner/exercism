#pragma once
#include <string>
#include <vector>
#include <map>

namespace grade_school {
    class school {
        private:
            std::map<int, std::vector<std::string>> roster_;
        public:
            const std::map<int, std::vector<std::string>> roster() const;
            void add(std::string name, int grade);
            const std::vector<std::string> grade(int grade_num) const;
    };
}  // namespace grade_school
