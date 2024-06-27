#include <iostream>

namespace first
{
    int x = 1;
} // namespace first

namespace second
{
    int x = 2;
} // namespace second

//typedef std::string string;
using string = std::string;

int main()
{

    int x = 0;
    std::cout << first::x << " is in namespace 'first'. " << second::x << " is in namespace 'second'. Both have the same variable name 'x'.\n";
    std::cout << x << " is local.\n";
    string name = "Adarsh";
    std::cout << name << '\n';
}