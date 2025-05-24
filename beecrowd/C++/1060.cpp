#include <iostream>
using namespace std;

int main()
{
    double numero[6];
    int positivo = 0;

    for (int i = 0; i < 6; i++)
    {
        cin >> numero[i];

        if (numero[i] > 0)
        {
            positivo++;
        }
    }

    cout << positivo << " valores positivos" << endl;

    return 0;
} // end main