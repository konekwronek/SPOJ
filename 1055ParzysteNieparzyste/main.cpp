#include <iostream>

using namespace std;

int main()
{
    int t, n, i;
    int numbers[100];
    cin >> t;
    while(t > 0){
      cin >> n;
      for(i = 0; i < n; i++){
        cin >> numbers[i];
      }
      for(i = 1; i < n; i += 2){
        cout << numbers[i] << " ";
      }
      for(i = 0; i < n; i += 2){
        cout << numbers[i];
        if(i < (n - 1))cout << " ";
      }
      cout << "\n";
      t--;
    }
    return 0;
}
