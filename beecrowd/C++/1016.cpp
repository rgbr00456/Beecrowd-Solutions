#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int distancia;
    cin >> distancia;

    int velocidadeY = 90;
    int velocidadeX = 60;

    int tempo = (distancia * 2);

    cout << tempo << " minutos" << endl;

    return 0;
} // end main