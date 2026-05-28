#pragma once
#include <string>

namespace rna_transcription {

char get_complement(char n);
char to_rna(char dna);
std::string to_rna(std::string dna);

}  // namespace rna_transcription
