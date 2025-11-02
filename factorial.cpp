#include <iostream>
using namespace std;

/*
input: int number;
output: number factorial;

example: 
input: number = 5;
output: = 5 * 4 * 3 * 2 = 120; 
i = 5 -> i * (i - 1) while i > 1
i = 5; product = 1
1 * 5 = 5
5 * 4 = 20
20 * 3 = 60
60 * 2 = 120

*/

int main()
{
    int num;
    cin >> num;
    int product = 1; 
    while (num > 1) 
    {
        product = product * num; 
        num--; 
    }
    cout << product;
    cout << endl << "-------" << endl;
    return 0;
}