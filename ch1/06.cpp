#include <iostream>

int main()
{
    int val = 0, val2 = 0;

    std::cout << "Type two integers delimited by the enter key. " << std::endl;
    std::cin >> val >> val2;

    std::cout << std::endl;

    if (val < val2) {
        while (val < val2) {
            std::cout << val << std::endl;
            ++val;
        }
    }
    if (val2 < val) {
        while (val2 < val) {
            std::cout << val2 << std::endl;
            ++val2;
        }
    }
    else {
        std::cout << val << std::endl;
    }

    return 0;
}