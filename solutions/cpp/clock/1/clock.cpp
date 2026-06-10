#include "clock.h"

namespace date_independent {
    clock::clock(int m) {
        if(m < 0) this->minutes = 1440 + m % 1440;
        else this->minutes = m % 1440;
    }
    clock::operator std::string() const {
        std::ostringstream ss;
        ss << std::setfill('0') << std::setw(2) << this->minutes / 60 << ":" << std::setw(2) << this->minutes % 60;
        return ss.str();
    }
}  // namespace date_independent
