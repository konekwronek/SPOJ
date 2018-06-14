#include <iostream>

using namespace std;

class Palindrom{
    int liczba;
    char cyfry[100];
    int len;
    int NaCyfry();
public:
    void SetNumber(int l){liczba = l; this->len = 0; NaCyfry();}
    int GetOdwrocona();
    int GetNumber(){return liczba;}
    bool CzyPalindrom();
};

int Palindrom::NaCyfry(){
    int licztemp = liczba;
    int cyfra;
    int i = 0;
    do{
        cyfra = licztemp % 10;
        cyfry[i] = cyfra;
        i++; this->len++;
        licztemp /= 10;
    }while(licztemp);
    return 1;
}
int Palindrom::GetOdwrocona(){
    int rliczba = 0;
    for(int i = 0; i < this->len; i++){
        rliczba = (rliczba * 10) + cyfry[i];
    }
    return rliczba;
}

bool Palindrom::CzyPalindrom(){
    for(int i=0; i < (this->len / 2); i++)
    if(cyfry[i] != cyfry[this->len - i - 1])return false;
    return true;
}

int main()
{
    int t;
    int l, rl, adds;
    Palindrom palm;
    cin >> t;
    while(t > 0)
    {
        cin >> l;
        adds = 0;
        palm.SetNumber(l);
        rl = palm.GetOdwrocona();
        while(!palm.CzyPalindrom())
        {
            palm.SetNumber(rl+l);
            rl = palm.GetOdwrocona();
            l = palm.GetNumber();
            adds++;
        }
        cout << palm.GetOdwrocona() << " " << adds << "\n";
        t--;
    }
    return 0;
}
