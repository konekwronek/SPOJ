#include <iostream>

using namespace std;

int main()
{
    int t, L, C;
    cin >> t;
    while(t > 0){
      cin >> L >> C;
      if(L == 1)cout << "TAK\n";
      else if(C%(L-1))cout << "TAK\n";
      else cout << "NIE\n";
      t--;
    }
    return 0;
}
