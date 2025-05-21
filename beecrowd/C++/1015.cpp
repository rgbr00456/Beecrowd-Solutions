#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    double distancia = sqrt(pow(x2 - x1) + pow(y2 - y1));

    cout << fixed << setprecision(4);
    cout << distancia << endl;

    return 0;
} // end main