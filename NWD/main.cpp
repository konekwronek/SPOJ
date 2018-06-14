#include <iostream>

using namespace std;

int nwd(int a, int b)
{
    if(a == 0)return b;
    else if(b == 0)return a;
    else return nwd(b, a % b);
}

int main()
{
    int t, a, b, wynik;
    cin >> t;
    while(t > 0)
    {
        cin >> a >> b;
        wynik = nwd(a, b);
        cout << wynik << endl;
        t--;
    }
    return 0;
}
