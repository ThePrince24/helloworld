#include <iostream>

int add(int a, int b);
int add(int a, int b, int c);
int add(int a, int b, int c, int d);

int main()
{
    std::cout << add(5,6) << ' ' << add(5,6,7) << ' ' << add(5,6,7,8) << '\n'; // overloaded functions, same function name, but different number or type of parameters. 
}

int add(int a, int b)
{
    return a+b;
}

int add(int a, int b, int c)
{
    return a+b+c;
}

int add(int a, int b, int c, int d)
{
    return a+b+c+d;
}