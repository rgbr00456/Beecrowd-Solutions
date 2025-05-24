#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    if (a < (b + c) && b < (a + c) && c < (b + a))
    {
        double perimetro = a + b + c;
        cout << fixed << setprecision(1);
        cout << "Perimetro = " << perimetro << endl;
    }
    else
    {
        double area = ((a + b) * c) / 2;
        cout << fixed << setprecision(1);
        cout << "Area = " << area << endl;
    }

    return 0;
} // end main