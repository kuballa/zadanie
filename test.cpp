#include <iostream>

int main()
{
    int x;
    std::cout << "Podaj x" << "\n";
    std::cin >> x;
    std::cout << "k" << "\n";
    std::cout << x << "\n";
    &y = x;
    std::cout << y << "\n";
    return 0;

}