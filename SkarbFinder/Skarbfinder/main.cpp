#include <iostream>

using namespace std;

int main()
{
    long t, i, lkrokow, horizontal, vertical, wskazowek;
    int kierunek;
    cin >> t;
    while(t > 0){
        cin >> wskazowek;
        vertical = horizontal = 0;
        for(i = 0; i < wskazowek; i++){
            cin >> kierunek;
            cin >> lkrokow;
            switch(kierunek){
                case 0: vertical = vertical + lkrokow; break; //polnoc
                case 1: vertical = vertical - lkrokow; break; //poludnie
                case 2: horizontal = horizontal + lkrokow; break; //zachod
                case 3: horizontal = horizontal - lkrokow; break; //wschod
            };
        }
        if(vertical == 0 && horizontal == 0)cout << "studnia" << endl;
        else{
            if(vertical > 0){
                kierunek = 0;
            }else{
                kierunek = 1;
                vertical = -vertical;
            }
            if(vertical != 0)cout << kierunek << " " << vertical << endl;
            if(horizontal > 0){
                kierunek = 2;
            }else{
                kierunek = 3;
                horizontal = -horizontal;
            }
            if(horizontal != 0)cout << kierunek << " " << horizontal << endl;
        }
        t--;
    }
    return 0;
}
