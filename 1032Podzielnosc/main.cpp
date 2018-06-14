#include <iostream>

using namespace std;

int main()
{
    int t, n, x, y;
    cin >> t;
    while(t > 0){
      cin >> n >> x >> y;
      for(int i = x; i < n; i++){
        if(!(i % x) && (i % y))cout << i << " ";
      }
      cout << "\n";
      t--;
    }
    return 0;
}
