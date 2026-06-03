#include "say.h"
#include <cstddef>
#include <stdexcept>

namespace say {

    std::vector<std::string> ones = {
        "", "one", "two", "three",
        "four", "five", "six", "seven",
        "eight", "nine", "ten", "eleven",
        "twelve", "thirteen", "fourteen", "fifteen",
        "sixteen", "seventeen", "eighteen", "nineteen"
    };
    std::vector<std::string> tens {
        "", "", "twenty", "thirty",
        "forty", "fifty", "sixty", "seventy",
        "eighty", "ninety"
    };
    std::vector<std::string> multi {"", "thousand", "million", "billion"};

    std::string get_block(std::string num_str, int idx) {
        int num = std::stoi(num_str.substr(idx - 2, 3));
        if (num < 20) return ones[num];

        std::string block_str = tens[num_str[idx - 1] - '0'];
        if (num_str[idx] - '0' > 0) {
            block_str += "-" + ones[num_str[idx] - '0'];
        }
        if (num < 100) return block_str;

        idx -= 2;
        if (num_str[idx] - '0' > 0) {
            block_str = ones[num_str[idx] - '0'] + " hundred" + ((block_str != "") ? (" " + block_str) : "");
        }

        return block_str;
    }

    std::string in_english(long num) {
        if (num < 0) throw std::domain_error("Input must be positive integer.");
        if (num > 999999999999) throw std::domain_error("Input above 999,999,999,999 is out of range.");
        if (num == 0) return "zero";

        std::string num_str = std::to_string(num);
        int str_len = num_str.length();
        while (str_len % 3 > 0) {
            num_str = "0" + num_str;
            str_len++;
        }

        std::string r_str = "";
        int count = 0;
        int idx = str_len - 1;
        while (idx >= 0) {
            std::string block = get_block(num_str, idx);

            if (block != "" && multi[count] != "") {
                block += " " + multi[count];
            }
            if (block != "" && r_str != "") {
                block += " ";
            }

            r_str = block + r_str;
            count++;
            idx -= 3;
        }

        return r_str;
    }

}  // namespace say
