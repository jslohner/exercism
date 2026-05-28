#pragma once
#include <iostream>

namespace queen_attack {

    class chess_board {
        private:
            std::pair<int, int> white_;
            std::pair<int, int> black_;
        public:
            explicit chess_board(std::pair<int, int> white, std::pair<int, int> black) : white_(white), black_(black) {
                if (white.first < 0 || white.first > 7) throw std::domain_error("Queen must have row which exists on the board (integer from 0-7).");
                if (white.second < 0 || white.second > 7) throw std::domain_error("Queen must have column which exists on the board (integer from 0-7).");
                if (white.first == black.first && white.second == black.second) throw std::domain_error("Both queen positions must be distinct.");
                white_ = white;
                black_ = black;
            }
            std::pair<int, int> white() const;
            std::pair<int, int> black() const;
            bool can_attack() const;
    };

}  // namespace queen_attack
