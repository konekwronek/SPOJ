#include <iostream>

using namespace std;

int main()
{
  int macierz[200][200];
  int m, n, num;
  cin >> m >> n;
  for(int mIdx = 0; mIdx < m; mIdx++){
    for(int nIdx = 0; nIdx < n; nIdx++){
      cin >> num;
      macierz[mIdx][nIdx] = num;
    }
  }
  for(int nIdx = 0; nIdx < n; nIdx++){
    for(int mIdx = 0; mIdx < m; mIdx++){
      cout << macierz[mIdx][nIdx];
      if(mIdx < (m - 1))cout << " ";
    }
    cout << "\n";
  }
  return 0;
}
