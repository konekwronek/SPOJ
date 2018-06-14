#include <iostream>

using namespace std;

int main()
{
  int t, l, k, lIdx, kIdx, table[100][100], cell;
  cin >> t;
  while(t > 0){
    cin >> l >> k;
    for(lIdx = 0; lIdx < l; lIdx++){
      for(kIdx = 0; kIdx < k; kIdx++){
        cin >> table[lIdx][kIdx];
      }
    }
    cell = table[0][0];
    for(kIdx = 1; kIdx < k; kIdx++){
      table[0][kIdx-1] = table[0][kIdx];
    }
    for(lIdx = 1; lIdx < l; lIdx++){
      table[lIdx-1][k-1] = table[lIdx][k-1];
    }
    for(kIdx = (k-1); kIdx >= 0; kIdx--){
        table[l-1][kIdx+1] = table[l-1][kIdx];
    }
    for(lIdx = (l-1); lIdx >= 0; lIdx--){
        table[lIdx+1][0] = table[lIdx][0];
    }
    table[1][0] = cell;
    for(lIdx = 0; lIdx < l; lIdx++){
      for(kIdx = 0; kIdx < k; kIdx++){
        cout << table[lIdx][kIdx];
        if(kIdx < (k-1))cout << " ";
      }
      cout << "\n";
    }
    t--;
  }
  return 0;
}
