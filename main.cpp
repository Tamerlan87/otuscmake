#include <iostream>

#include "version.h"

int main() {
    std::cout << "VERSION:" << MAJOR_VERSION << "." << MINOR_VERSION << std::endl;
    return 0;
}