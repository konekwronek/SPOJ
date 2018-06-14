#include <iostream>

using namespace std;

int main()
{
    int t, n, i, pice;
    int tab[100];
    cin >> t;
    while(t > 0)
    {
        cin >> n;
        if(n <= 100){
            for(i = 0; i < n; i++)
            {
                cin >> pice;
                tab[i] = pice;
            }
            for(i = n - 1; i >= 0; i--)
            {
                cout << tab[i] << " ";
            }
            cout << endl;
        }
        t--;
    }
    return 0;
}
