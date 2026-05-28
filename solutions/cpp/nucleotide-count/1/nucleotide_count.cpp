#include "nucleotide_count.h"
#include <stdexcept>

namespace nucleotide_count {

    std::map<char, int> count(std::string dna) {
        std::map<char, int> counts {{'A', 0}, {'C', 0}, {'G', 0}, {'T', 0}};
        for (const char c : dna) {
            if (c != 'A' && c != 'C' && c != 'G' && c != 'T') {
                throw std::invalid_argument("Invalid Input");
            }
            counts[c]++;
        }
        return counts;
    }

}  // namespace nucleotide_count
