#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double numeros[6];
    double soma = 0.0;
    double media = 0.0;
    int positivos = 0;

    for (int i = 0; i < 6; i++)
    {
        cin >> numeros[i];

        if (numeros[i] > 0)
        {
            soma += numeros[i];
            positivos++;
        }
    }

    if (positivos > 0)
    {
        media = soma / positivos;
    }

    cout << fixed << setprecision(1);
    cout << positivos << " valores positivos" << endl;
    cout << media << endl;

    return 0;
} // end main