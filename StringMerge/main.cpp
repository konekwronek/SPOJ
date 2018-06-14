#include <iostream>
#include <cstring>

using namespace std;

char * string_merge(char * a, char * b)
{
    unsigned int len, i;

    len = strlen(a);
    if(len > strlen(b))len = strlen(b);
    char * mergetab = new char[(len * 2) + 1];
    for(i = 0; i < len; i++)
    {
        mergetab[i * 2] = a[i];
        mergetab[(i * 2) + 1] = b[i];
    }
    mergetab[i * 2] = 0;
    return mergetab;
}

int main()
{
    int t;
    char S1[1001], S2[1001], *S;

    cin >> t;
    while(t){
        cin >> S1;
        cin >> S2;
        S = string_merge(S1, S2);
        cout << S << endl;
        delete[] S;
        t--;
  }
    return 0;
}
