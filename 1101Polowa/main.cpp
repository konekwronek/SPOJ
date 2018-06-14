#include <iostream>

using namespace std;

int main()
{
    string ciag;
    int t;
    cin >> t;
    while(t > 0){
        cin >> ciag;
        ciag = ciag.substr(0,ciag.size()/2);
        cout << ciag << "\n";
        t--;
    }
    return 0;
}
