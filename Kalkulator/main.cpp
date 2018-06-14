#include <iostream>

using namespace std;

int main()
{
    char dzial;
    int a, b;
    while(cin >> dzial >> a >> b)
    {
        switch(dzial)
        {
            case '+' : cout << (a + b) << "\n"; break;
            case '-' : cout << (a - b) << "\n"; break;
            case '*' : cout << (a * b) << "\n"; break;
            case '/' : cout << (a / b) << "\n"; break;
            case '%' : cout << (a % b) << "\n"; break;
        }
    }
    return 0;
}
