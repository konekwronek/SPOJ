#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  short t, n, i, sum, nearest, tab[100];
  double avg, diff;
  cin >> t;
  while(t > 0){
    cin >> n;
    sum = 0, diff = 200;
    for(i = 0; i < n; i++){
      cin >> tab[i];
      sum += tab[i];
    }
    avg = (1.0 * sum) / n;
    for(i = 0; i < n; i++){
      if(abs(tab[i] - avg) < diff){
        diff = abs(tab[i] - avg);
        nearest = tab[i];
      }
    }
    cout << nearest << "\n";
    t--;
  }
  return 0;
}
