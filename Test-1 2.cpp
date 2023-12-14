#include <iostream>
#include <cstring>

const int MAX_CHAR = 256;

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    int charFrequency[MAX_CHAR] = {0};

    for (char ch : input) {
        if (std::isalpha(ch)) {
            charFrequency[ch]++;
        }
    }

    std::cout << "Character frequencies:\n";
    for (int i = 0; i < MAX_CHAR; ++i) {
        if (charFrequency[i] > 0 && std::isalpha(i)) {
            std::cout << "'" << static_cast<char>(i) << "': " << charFrequency[i] << " times\n";
        }
    }

    return 0;
}

