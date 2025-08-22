#include "leap.h"

namespace leap {

bool is_leap_year(int year) {
    bool divis_by_100 = (year % 100 == 0);
    if ((year % 4 == 0 && !divis_by_100) || (divis_by_100 && year % 400 == 0)) return true;
    return false;
}

}  // namespace leap
