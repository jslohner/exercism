#pragma once
#include <string>
#include <sstream>
#include <iomanip>

namespace date_independent {
    class clock {
        private:
            int minutes;
        public:
            clock(int m);
            static clock at(int h, int m) { return clock(h * 60 + m); }
            clock plus(int m) { return clock(minutes + m); }
            operator std::string() const;
            bool operator==(const clock& compare) const { return minutes == compare.minutes; }
            bool operator!=(const clock& compare) const { return minutes != compare.minutes; }
    };
}  // namespace date_independent
