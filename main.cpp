#include <iostream>

#include "Base64.h"

int main() {
    char *in = "Hello World!";

    std::cout << "To encode: 'Hello World!" << std::endl;

    char *out = Red::Base64Encode(in);

    std::cout << "Encoded: '" << out << "'." << std::endl;
    std::cout << std::endl;
    std::cout << "To decode: '" << out << "'." << std::endl;

    std::cout << "Decoded: '" << Red::Base64Decode(out) << "'." << std::endl;
    return 0;
}
