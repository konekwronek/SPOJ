#include <iostream>

using namespace std;

int main()
{
    int n, i, j;
    int cities[100000];
    long long sums[2][100000], sum, sum_max;
    cin >> n;
    for(i = 0; i < n; i++){
      cin >> cities[i];
    }
    sums[0][0] = sum_max = cities[0];
    for(i = 1; i < n; i++){
      sums[0][i] = sums[0][i - 1] + cities[i];
    }
    sums[1][n - 1] = cities[n - 1];
    for(i = n - 1; i >= 0; i--){
      sums[1][i] = sums[1][i + 1] + cities[i];
    }
    for(i = 0; i < n; i++){
      cout << cities[i] << "\t" << sums[0][i] << "\t" << sums[1][i] << endl;
    }
    for(i = 0; i < n; i++){
      sum = sums[0][i];
      if(sum_max < sum)sum_max = sum;
      sum = cities[i];
      if(sum_max < sum)sum_max = sum;
    }
    for(i = 0; i < n; i++){
      for(j = i; j < n; j++){
        sum = sums[0][j] - sums[0][i];
        if(sum_max < sum)sum_max = sum;
      }
    }
    cout << sum_max;
    return 0;
}
