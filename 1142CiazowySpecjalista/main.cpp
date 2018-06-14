#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    short t, x, y, z;
    double result;
    cin >> t;
    while(t>0){
      cin >> x >> y >> z;
      result = ((x + y) - (x / (z - 1.0) * z)) * 12.0;
      result = round(result);
      cout << result << "\n";
      t--;
    }
    return 0;
}
