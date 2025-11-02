#include <iostream>
using namespace std;

/*
input: int first; int last; int divider;
output: num % div == 0;

example:
int firts = 3; int last = 16; int divider = 4;
output: 4,8,12,16;
*/
int main()
{
    int first;
    int last;
    int divider;
    
    cout << "Write first number: ";
    cin >> first;
    cout << "Write last number: ";
    cin >> last;
    cout << "Write divider: ";
    cin >> divider;
    for (int i = first; i <= last; i++)
    {
        if (i % divider == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl << "------" << endl;

    return 0;
}




