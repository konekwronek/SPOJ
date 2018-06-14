#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t, i, liczba, root;
    cin >> t;
    while(t > 0)
    {
        cin >> liczba;
        if(liczba > 3){
            root = sqrt(liczba);
            for(i = 2; i <= root; i++)
            {
                if(liczba % i == 0)
                {
                    cout << "NIE" << endl;
                    i = root;
                    break;
                }else if(i == root)cout << "TAK" << endl;
            }
        }else if(liczba == 1)cout << "NIE" << endl;
        else if(liczba == 2)cout << "TAK" << endl;
        else if(liczba == 3)cout << "TAK" << endl;
        else if(liczba < 1)cout << "NIE" << endl;
        t--;
    }
    return 0;
}
