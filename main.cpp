#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, i;
    cout << " Please enter n ";
    cin >> n;

    for (i = 1; i <= 15; i++)
    {
        cout << n << " X"
             << " = " << i * n;
        cout << endl;
    }

    return 0;
}