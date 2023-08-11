#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

std::string generatePassword(int length = 12, bool includeUppercase = true, bool includeNumbers = true, bool includeSymbols = true) {
    const std::string lowercaseChars = "abcdefghijklmnopqrstuvwxyz";
    const std::string uppercaseChars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const std::string numberChars = "0123456789";
    const std::string symbolChars = "!@#$%^&*()-_+=<>?";

    std::string validChars = lowercaseChars;
    if (includeUppercase) validChars += uppercaseChars;
    if (includeNumbers) validChars += numberChars;
    if (includeSymbols) validChars += symbolChars;

    std::string password;
    srand(static_cast<unsigned int>(time(nullptr)));

    for (int i = 0; i < length; i++) {
        int randomIndex = rand() % validChars.length();
        password += validChars[randomIndex];
    }

    return password;
}

int main() {
    std::string password = generatePassword(16, true, true, true);
    std::cout << "Generated Password: " << password << std::endl;
    return 0;
}
