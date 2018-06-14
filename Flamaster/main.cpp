#include <iostream>

using namespace std;

int main()
{
    int t, i, j, n;
    char wejscie[201];
    char wyjscie[201];
    cin >> t;
    while(t > 0 && t <= 50)
    {
        cin >> wejscie;
        i = 0;
        j = 0;
        while(wejscie[i] != 0)
        {
            n = 1;
            while(wejscie[i] == wejscie[i + 1]){
                n++; i++;
            }
            if(n > 2){
                wyjscie[j] = wejscie[i]; j++;
                if(n < 10){
                    wyjscie[j] = (n + 0x30); j++;
                }
                else if(n >= 10 && n < 100)
                {
                    wyjscie[j] = ((n % 100) / 10 + 0x30); j++;
                    wyjscie[j] = ((n % 10) + 0x30); j++;
                }else if(n >= 100 && n <= 200)
                {
                    wyjscie[j] = (((n % 1000) / 100) + 0x30); j++;
                    wyjscie[j] = ((n % 100) / 10 + 0x30); j++;
                    wyjscie[j] = ((n % 10) + 0x30); j++;
                }
            }else if( n == 1){
                wyjscie[j] = wejscie[i]; j++;
            }
            else{
                wyjscie[j] = wejscie[i]; j++;
                wyjscie[j] = wejscie[i]; j++;
            }
            i++;
        }
        wyjscie[j] = 0;
        cout << wyjscie << endl;
        t--;
    }
    return 0;
}
