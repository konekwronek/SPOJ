#include <iostream>

using namespace std;

class numsys{
  char cnum[10];
  int number;
  int length;
public:
  void SetNumber(int n){number = n;}
  void GetNumber();
  void ToSystem(int sys);
};

void numsys::GetNumber(){
  for(int i = length - 1; i >= 0; i--){
    cout << cnum[i];
  }
}

void numsys::ToSystem(int sys){
  int num, cyf;
  num = number;
  length = 0;
  do{
      cyf = num % sys;
      if(cyf < 10)cnum[length] = cyf + 48;
      else cnum[length] = cyf + 55;
      length++;
      num /= sys;
  }while(num);
}

int main()
{
  int t, num;
  numsys number;
  cin >> t;
  while(t > 0){
    cin >> num;
    number.SetNumber(num);
    number.ToSystem(16);
    number.GetNumber();
    cout << " ";
    number.ToSystem(11);
    number.GetNumber();
    cout << "\n";
    t--;
  }
  return 0;
}
