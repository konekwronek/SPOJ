#include <iostream>

using namespace std;
int registers[10];
char operation;
int input1, input2;

int main()
{
    while(cin >> operation >> input1 >> input2)
    {
        switch(operation)
        {
            case 'z': registers[input1] = input2; break;
            case '+': cout << registers[input1] + registers[input2] << "\n"; break;
            case '-': cout << registers[input1] - registers[input2] << "\n"; break;
            case '*': cout << registers[input1] * registers[input2] << "\n"; break;
            case '/': cout << registers[input1] / registers[input2] << "\n"; break;
            case '%': cout << registers[input1] % registers[input2] << "\n"; break;
        }
    }
    return 0;
}
