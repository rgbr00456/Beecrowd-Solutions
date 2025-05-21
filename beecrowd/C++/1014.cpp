#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int distancia;
    cin >> distancia;

    double litros;
    cin >> litros;

    double consumo = distancia / litros;

    cout << fixed << setprecision(3);
    cout << consumo << " km/l" << endl;

    return 0;
} // end main