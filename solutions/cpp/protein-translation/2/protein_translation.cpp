#include "protein_translation.h"

namespace protein_translation {
    std::map<codon, acid> amino_acids {
        {"AUG", "Methionine" }, 
        {"UUU", "Phenylalanine"}, 
        {"UUC", "Phenylalanine"}, 
        {"UUA", "Leucine"}, 
        {"UUG", "Leucine"}, 
        {"UCU", "Serine"}, 
        {"UCC", "Serine"}, 
        {"UCA", "Serine"}, 
        {"UCG", "Serine"}, 
        {"UAU", "Tyrosine"}, 
        {"UAC", "Tyrosine"}, 
        {"UGU", "Cysteine"}, 
        {"UGC", "Cysteine"}, 
        {"UGG", "Tryptophan"}, 
        {"UAA", "STOP"}, 
        {"UAG", "STOP"}, 
        {"UGA", "STOP"}, 
    };
    peptide proteins(std::string rna) {
        peptide p;
        for (unsigned long i = 0; i < rna.length(); i+=3) {
            auto search = amino_acids.find(rna.substr(i, 3));
            if (search != amino_acids.end()) {
                if (search->second == "STOP") return p;
                p.push_back(search->second);
            }
        }
        return p;
    }
}  // namespace protein_translation
