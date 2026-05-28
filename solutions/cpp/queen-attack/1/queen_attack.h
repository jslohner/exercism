#pragma once
#include <iostream>

namespace queen_attack {

    class chess_board {
        private:
            std::pair<int, int> white_;
            std::pair<int, int> black_;
        public:
            explicit chess_board(std::pair<int, int> p1, std::pair<int, int> p2);
            std::pair<int, int> white() const;
            std::pair<int, int> black() const;
            bool can_attack() const;
    };

}  // namespace queen_attack
