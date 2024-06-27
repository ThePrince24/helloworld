#include <iostream>
#include <ctime>

int main()
{
    // pseudo - random, not truly random (but close)

    std::srand(std::time(0));

    int num = std::rand();
    std::cout << num << '\n';

    int randNum = std::rand() & 6 + 1; // random numbers 1 through 6
}