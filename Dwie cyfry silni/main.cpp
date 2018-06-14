#include <cstdio>

int main()
{
    unsigned int t, n, i, wynik;
    scanf("%d", &t);
    if(t <= 30 && t >= 1){
        while(t > 0)
        {
            scanf("%d", &n);
            if(n == 0 || n == 1)printf("%d %d\n", 0, 1);
            else if(n < 10 && n > 1){
                wynik = 1;
                for(i = 1; i <= n; i++)
                {
                    wynik = (wynik * i) % 100;
                }
                printf("%d %d\n", ((wynik % 100) / 10), wynik % 10);
            }else if(n >= 10) printf("%d %d\n", 0, 0);
            t--;
        }
    }
    return 0;
}
