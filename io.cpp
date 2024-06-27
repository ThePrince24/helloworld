#include <iostream>

int main()
{
    /*
    std::string x;
    std::cout << "Name: ";
    std::cin >> x;
    std::cout << x;
    */
    std::string name;
    std::cout << "Enter full name: ";
    std::getline(std::cin >> std::ws, name);   // std::ws removes any whitespaces or new line characters left from the previous input buffer
    std::cout << name;                         // often there is a \n (due to pressing enter) left in the input buffer
}