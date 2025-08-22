#include "reverse_string.h"

namespace reverse_string {

std::string reverse_string(std::string subject) {
    std::reverse(subject.begin(), subject.end());
    return subject;
}

}  // namespace reverse_string
