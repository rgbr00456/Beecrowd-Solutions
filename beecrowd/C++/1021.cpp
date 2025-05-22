#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double valor;
    cin >> valor;

    int notas[] = {100, 50, 20, 10, 5, 2};
    int moedas[] = {100, 50, 25, 10, 5, 1};

    int valorCentavos = (int)(valor * 100 + 0.5);

    cout << "NOTAS:" << endl;
    for (int i = 0; i < 6; i++)
    {
        int quantidade = valorCentavos / (notas[i] * 100);
        cout << quantidade << " nota(s) de R$ " << fixed << setprecision(2) << (double)notas[i] << endl;
        valorCentavos %= (notas[i] * 100);
    }

    cout << "MOEDAS:" << endl;
    for (int i = 0; i < 6; i++)
    {
        int quantidade = valorCentavos / moedas[i];
        cout << quantidade << " moeda(s) de R$ " << fixed << setprecision(2) << (double)moedas[i] / 100 << endl;
        valorCentavos %= moedas[i];
    }

    return 0;
}
