#include <iostream>

using namespace std;

int main()
{
    long t, v1, v2, v;
    cin >> t;
    while(t > 0){
        cin >> v1 >> v2;
        v = 20000000/(10000000/v1 + 10000000/v2);
        cout << v << "\n";
        t--;
    }
    return 0;
}
