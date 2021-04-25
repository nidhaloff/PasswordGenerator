#include "passGen.h"


int main(int argc, char const *argv[])
{
    uint n = atoi(argv[argc - 1]);
    std::cout << "password generated: " << PasswordGenerator::generate(n) << std::endl;
    return 0;
}
