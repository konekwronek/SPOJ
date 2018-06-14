#define ANSI

#include <iostream>
#include <cstring>
using namespace std;

void printfloat(float);

int main() {
  int t;
  float x;

  cin >> t; /* wczytaj liczbê testów */
  while(t){
    cin >> x;
    printfloat(x);
    t--;
  }
  return 0;
}


void printfloat(float liczba)
{
    union unia{
        float liczba;
        long bity;
    };
    unia liczba2;
    liczba2.liczba = liczba;
    cout << hex << ((liczba2.bity & 0xff000000) >> 3*8) << " " << ((liczba2.bity & 0xff0000) >> 2*8) << " ";
    cout << ((liczba2.bity & 0xff00) >> 8) << " " << (liczba2.bity & 0xff) << endl;
}
