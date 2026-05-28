#include "raindrops.h"

namespace raindrops {

    std::string convert(int input) {
        std::string result = "";

        if (input % 3 == 0) {
            result += "Pling";
        }
        if (input % 5 == 0) {
            result += "Plang";
        }
        if (input % 7 == 0) {
            result += "Plong";
        }

        if (result == "") {
            return std::to_string(input);
        }

        return result;
    }

}  // namespace raindrops
