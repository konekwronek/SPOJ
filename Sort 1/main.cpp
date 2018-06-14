#include <iostream>
#include <cmath>
using namespace std;

class punkt
{
public:
    char nazwa[11];
    int x, y;
    double odleglosc;
    double obliczodl()
    {
        odleglosc = double(sqrt((x * x) + (y * y)));
    }
};

void sortuj(punkt * punkty, int rozmiar)
{
    int n = rozmiar;
    punkt punkcik;
    int i;
    do{
        for(i = 0; i < (n - 1); i++)
        {
            if(punkty[i].odleglosc > punkty[i + 1].odleglosc)
            {
                punkcik = punkty[i];
                punkty[i] = punkty[i + 1];
                punkty[i + 1] = punkcik;
            }
        }
        n--;
    }while(n > 1);
}

int main()
{
    int t, lPunktow, i;
    punkt punkcik;
    punkt punkty[1005];
    cin >> t;
    while(t>0)
    {
        cin >> lPunktow;

        for(i = 0; i < lPunktow; i++)
        {
            cin >> punkcik.nazwa;
            cin >> punkcik.x;
            cin >> punkcik.y;
            punkcik.obliczodl();
            punkty[i] = punkcik;
        }
        sortuj(punkty, lPunktow);
        for(long i = 0; i < lPunktow ; i++)
        {
            cout << punkty[i].nazwa << " ";
            cout << punkty[i].x << " ";
            cout << punkty[i].y << endl;
        }
        t--;
    }
    return 0;
}
