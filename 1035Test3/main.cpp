#include <iostream>
using namespace std;

int main()
{
    short l, n;
    bool act, last = true;
    n = 0;
    while(1){
      cin >> l;
      cout << l << "\n";
      if(l == 42)act = true;
      else act = false;
      if(last == false && act == true)n++;
      if(n == 3)break;
      last = act;
    }
    return 0;
}
