#include <iostream>
using namespace std;

int main()
{
    int valor;
    cin >> valor;

    int notas[] = {100, 50, 20, 10, 5, 2, 1};

    cout << valor << endl;

    for (int i = 0; i < 7; i++)
    {
        int quantidade = valor / notas[i];
        cout << quantidade << " nota(s) de R$ " << notas[i] << ",00" << endl;
        valor %= notas[i];
    }

    return 0;
} // end main