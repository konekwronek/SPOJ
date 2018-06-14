#include <cstdio>

using namespace std;

int main()
{
    int t, a, b, aplus, bplus;
    scanf("%d", &t);
    while(t > 0 && t <= 20)
    {
        scanf("%d %d", &a, &b);
        if(a >= 10 && b <= 30)
        {
            aplus = a; bplus = b;
            while(a != b)
            {
                if(a > b)b = b + bplus;
                else a = a + aplus;
            }
            printf("%d\n", a);
        }
        t--;
    }
    return 0;
}
