#include <cstdio>

using namespace std;

int main()
{
    int t, n, liczba, i, wynik;
    scanf("%d", &t);
    while(t > 0 && t <= 100)
    {
        scanf("%d", &n);
        wynik = 0;
        for(i = 0; i < n; i++)
        {
            scanf("%d", &liczba);
            wynik += liczba;
        }
        printf("%d\n", wynik);
        t--;
    }
    return 0;
}
