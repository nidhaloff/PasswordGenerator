#include <cstdlib>
#include <time.h>
#include <stdexcept>
#include <stdlib.h>

#include "passGen.h"


std::string PasswordGenerator::generate(uint passwordLength)
{
    if (passwordLength <= 0) {
        throw std::invalid_argument("password length should be a positive number > 0");
    }
    srand(time(NULL));
    const std::string
        allChars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*";
    const int allCharsLength = allChars.length();
    std::string result = "";
    for (int i=0; i<passwordLength; i++) {
        int randomIndex = rand() % allCharsLength + 1;
        char randomChar = allChars[randomIndex];
        result += randomChar;
    }
    return result;
}