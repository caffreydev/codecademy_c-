#include <iostream>
#include <string>
#include <vector>

void bleep(std::string &word, std::string &text) {
    
std::vector <int> broccoli_indices;
int word_length = word.length();

std::string replacement;

for (int i = 0; i < word_length; i++) {
    replacement += "*";
}

for (int i = 0; i < text.length() - word_length; i++) {
    if (text.substr(i, word_length) == word) {
    text.replace(i, word_length, replacement);
    }
}

}