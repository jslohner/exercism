#include "queen_attack.h"

namespace queen_attack {

    std::pair<int, int> chess_board::white() const { return white_; }
    std::pair<int, int> chess_board::black() const { return black_; }
    bool chess_board::can_attack() const {
        if (
            white_.first == black_.first ||
            white_.second == black_.second ||
            white_.first - white_.second == black_.first - black_.second ||
            7 - white_.first - white_.second == 7 - black_.first - black_.second
        ) return true;
        return false;
    }

}  // namespace queen_attack
