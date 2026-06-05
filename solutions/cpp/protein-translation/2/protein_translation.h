#pragma once
#include <map>
#include <string>
#include <vector>

using namespace std;

using acid = string;
using codon = string;
using peptide = vector<string>;

namespace protein_translation {
    extern std::map<codon, acid> amino_acids;
    peptide proteins(string rna);
}  // namespace protein_translation
