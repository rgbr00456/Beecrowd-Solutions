#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    double areaTriangulo = (a * c) / 2;
    double areaCirculo = 3.14159 * (c * c);
    double areaTrapezio = ((a + b) * c) / 2;
    double areaQuadrado = (b * b);
    double areaRetangulo = a * b;

    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << areaTriangulo << endl;
    cout << "CIRCULO: " << areaCirculo << endl;
    cout << "TRAPEZIO: " << areaTrapezio << endl;
    cout << "QUADRADO: " << areaQuadrado << endl;
    cout << "RETANGULO: " << areaRetangulo << endl;

    return 0;
} // end main