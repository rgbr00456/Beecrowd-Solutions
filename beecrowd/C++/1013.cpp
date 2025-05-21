#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int maior = (a + b + abs(a - b)) / 2;

    if (maior > c)
    {
        cout << " " << maior << "eh o maior" << endl;
    }
    else
    {
        cout << " " << c << "eh o maior" << endl;
    }

    return 0;
} // end main