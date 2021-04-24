#include "passGen.h"


int main(int argc, char const *argv[])
{

    std::cout << "argc: " << argc << std::endl;
    for (int i=0; i< argc; i++) {
        std::cout << "value: " << argv[i] << std::endl;
    }

    uint n = atoi(argv[argc - 1]); 
    std::cout << "password generated: " << PasswordGenerator::generate(n) << std::endl;
    return 0;
}
