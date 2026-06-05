#include "secret_handshake.h"
#include <algorithm>

namespace secret_handshake {
    vector<string> commands(int n) {
        vector<string> cv;

        if (n & 1) cv.push_back("wink");
        if (n & 2) cv.push_back("double blink");
        if (n & 4) cv.push_back("close your eyes");
        if (n & 8) cv.push_back("jump");
        if (n & 16) reverse(cv.begin(), cv.end());

        return cv;
    }
}  // namespace secret_handshake
