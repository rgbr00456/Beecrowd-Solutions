#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int horasGastas, velMedia;
    cin >> horasGastas >> velMedia;

    int distanciaTotal = velMedia * horasGastas;
    double gasto = distanciaTotal / 12.0;

    cout << fixed << setprecision(3);
    cout << gasto << endl;

    return 0;
} // end main