#include "queen_attack.h"
#include <stdexcept>

namespace queen_attack {

    chess_board::chess_board(std::pair<int, int> p1, std::pair<int, int> p2) {
        if (p1.first < 0 || p1.first > 7) throw std::domain_error("Queen must have row which exists on the board (integer from 0-7).");
        if (p1.second < 0 || p1.second > 7) throw std::domain_error("Queen must have column which exists on the board (integer from 0-7).");
        if (p1.first == p2.first && p1.second == p2.second) throw std::domain_error("Both queen positions must be distinct.");
        white_ = p1;
        black_ = p2;
    }
    std::pair<int, int> chess_board::white() const { return white_; }
    std::pair<int, int> chess_board::black() const { return black_; }
    bool chess_board::can_attack() const {
        if (this->white_.first == this->black_.first) return true;
        if (this->white_.second == this->black_.second) return true;
        std::pair<int, int> diagonal = std::make_pair(this->white_.first, this->white_.second);
        while (diagonal.first >= 0) {
            diagonal.first--;
            diagonal.second--;
        }
        while (diagonal.first < 8 && diagonal.second < 8) {
            diagonal.first++;
            diagonal.second++;
            if (diagonal.first == this->black_.first && diagonal.second == this->black_.second) return true;
        }
        diagonal = std::make_pair(this->white_.first, this->white_.second);
        while (diagonal.second >= 0) {
            diagonal.first++;
            diagonal.second--;
        }
        while (diagonal.first < 8 && diagonal.second < 8) {
            diagonal.first--;
            diagonal.second++;
            if (diagonal.first == this->black_.first && diagonal.second == this->black_.second) return true;
        }
        return false;
    }

}  // namespace queen_attack
