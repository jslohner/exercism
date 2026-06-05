#include "secret_handshake.h"
#include <bitset>
#include <algorithm>

namespace secret_handshake {
    vector<string> commands(int n) {
        vector<string> cv = {"jump", "close your eyes", "double blink", "wink"};
        string binary = bitset<5>(n).to_string();
        int i = 4;
        while (i > 0) {
            if (binary[i] == '0') {
                cv.erase(cv.begin() + (i - 1));
            }
            i--;
        }
        if (binary[0] == '0') reverse(cv.begin(), cv.end());

        return cv;
    }
}  // namespace secret_handshake
