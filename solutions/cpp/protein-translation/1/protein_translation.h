#pragma once
#include <iostream>
#include <string>
#include <vector>

namespace protein_translation {
    std::string get_protein(std::string codon);
    std::vector<std::string> proteins(std::string seq);
}  // namespace protein_translation
