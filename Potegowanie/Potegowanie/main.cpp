#include <stdio.h>
int main(void)
{
    int t;
    unsigned int a, b;
    unsigned int wynik, temp;
    unsigned int tab[32];
    unsigned int maska;
    scanf("%d", &t);
    if(t <= 10 && t > 0){
        while(t--)
        {
                scanf("%d %d", &a, &b);
                maska = 0x80000000;
                int i = 31;
                wynik = 1;
                while((b & maska) == 0)
                {
                    maska = maska >> 1;
                    i--;
                }
                tab[0] = a % 10;
                for(int j = 1; j <= i; j++){
                    tab[j] = (tab[j - 1] * tab[j - 1]) % 10;
                }
                for(int j = i; j >= 0; j--){
                    if((b & maska) != 0) wynik = (wynik * tab[j]) % 10;
                    maska = maska >> 1;
                }
                printf("%d\n", wynik%10);
        }
    }

    return 0;
}
