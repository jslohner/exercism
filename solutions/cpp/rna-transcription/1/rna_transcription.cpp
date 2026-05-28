#include "rna_transcription.h"

namespace rna_transcription {

    char get_complement(char n) {
        if (n == 'A') {
            return 'U';
        } else if (n == 'C') {
            return 'G';
        } else if (n == 'G') {
            return 'C';
        } else {
            return 'A';
        }
    }

    char to_rna(char dna) {
        return get_complement(dna);
    }

    std::string to_rna(std::string dna) {
        std::string new_seq = "";
        for (const char c : dna) {
            new_seq += get_complement(c);
        }
        return new_seq;
    }

}  // namespace rna_transcription
