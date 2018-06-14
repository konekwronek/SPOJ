#include <cstdio>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t;
    double r, d, wynik;
        cin >> r >> d;
        if(d >= 1 && d < (2 * r) && (2 * r) <= 2000){
            d = d * 0.5;
            wynik = ((r * r) - (d * d)) * 3141.592654;
            wynik = round(wynik);
            wynik = wynik * 0.001;
            printf("%1.2f", wynik);
        }
    return 0;
}
