#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t, i, nObzar, nCiastPud,  czas, spust, nPud;
    cin >> t;
    while(t > 0)
    {
        cin >> nObzar;
        cin >> nCiastPud;
        spust = 0;
        for(i = 0; i < nObzar; i++)
        {
            cin >> czas;
            spust += czas;
        }
        nPud = ((86400.0 * nObzar * nObzar / spust) / nCiastPud);
        cout << nPud << endl;
        t--;
    }
    return 0;
}
