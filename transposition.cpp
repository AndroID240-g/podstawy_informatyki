#include <iostream>


int main()
{
    int a;
    int b;
    std::cin >> a; //15
    std::cin >> b; //20
    int temp = a; //15
    a = b; //a = 20, b = 20
    b = temp; //b = 15
    std::cout << "a = " << a << "b = " << b;
    return 0;
}