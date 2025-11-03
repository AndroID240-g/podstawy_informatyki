#include <iostream>
using namespace std;

/*
input: int user_inputs
output: average = (sum + user_input1) / (count - 1)

example: 
user_inputs = 2 4 12 52 10 22
output = 2 + 4 + 12 + 52 + 10 + 22 / 6 = 17
*/

int main()
{
    int user_input1, user_inputs;
    float average;
    int sum = 0; 
    int count = 1; 
    cout << "Write your numbers: ";
    cin >> user_input1; 
    while (user_inputs != 0) 
    {
        cout << "Write more: ";
        cin >> user_inputs;
        sum = sum + user_inputs;
        count++; 
    }
    average = (sum + user_input1) / (count - 1); 
    cout << "Your average: " << average;
    cout << endl << "--------" << endl;
    return 0;
}
