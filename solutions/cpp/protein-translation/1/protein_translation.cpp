#include "protein_translation.h"

namespace protein_translation {
    static std::vector<std::string> s_list = {"UAA", "UAG", "UGA"};
    std::string get_protein(std::string codon) {
        if (codon == "AUG") return "Methionine";
        if (codon == "UUU" || codon == "UUC") return "Phenylalanine";
        if (codon == "UUA" || codon == "UUG") return "Leucine";
        if (codon == "UCU" || codon == "UCC" || codon == "UCA" || codon == "UCG") return "Serine";
        if (codon == "UAU" || codon == "UAC") return "Tyrosine";
        if (codon == "UGU" || codon == "UGC") return "Cysteine";
        if (codon == "UGG") return "Tryptophan";
        if (codon == "UAA" || codon == "UAG" || codon == "UGA") return "STOP";
        return "";
    }
    std::vector<std::string> proteins(std::string seq) {
        std::vector<std::string> r;
        int seq_len = seq.length();
        for (int i = 0; i < seq_len; i+=3) {
            std::string protein = get_protein(seq.substr(i, 3));
            if (protein == "STOP") return r;
            r.push_back(protein);
        }
        return r;
    }
}  // namespace protein_translation
