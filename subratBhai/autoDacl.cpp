// Write a function that accept one intiger and and one double value and return the greater of two.

#include <iostream>
auto returnFun(int a, double b)->decltype(a>b?a:b)
{
    if (a > b)
        return a;
    else
        return b;
}
int main()
{
    int a = 5;
    double b = 4.5;
    auto r = returnFun(a, b);
    std::cout << "The result is :" << r;
    return 0;
}
