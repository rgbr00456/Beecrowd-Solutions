#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int horaInicial, horaFinal;
    cin >> horaInicial >> horaFinal;

    if (horaInicial < horaFinal)
    {
        int duracao = horaFinal - horaInicial;
        cout << "O JOGO DUROU " << duracao << " HORA(S)" << endl;
    }
    else if (horaInicial > horafinal)
    {
        int duracao = (24 - horaInicial) + horaFinal;
        out << "O JOGO DUROU " << duracao << " HORA(S)" << endl;
    }
    else
    {
        cout << "O JOGO DUROU 24 HORA(S)" << endl;
    }

    return 0;
} // end main