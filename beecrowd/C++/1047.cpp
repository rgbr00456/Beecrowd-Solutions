#include <iostream>
using namespace std;

int main()
{
    int horaInicial, minutoInicial, horaFinal, minutoFinal;
    cin >> horaInicial >> minutoInicial >> horaFinal >> minutoFinal;

    int inicio = (horaIncial * 60) + minutoInicial int fim = (horaFinal * 60) + minuitosFinal;

    if (fim <= inicio)
    {
        fim += 24 * 60;
    }

    int duracao = fim - inicio;
    int duracaoHoras = duracao / 60;
    int duracaoMinutos = duracao % 60;

    cout << "O JOGO DUROU " << duracaoHoras << " HORA(S) E " << duracaoMinutos << " MINUTO(S)" << endl;
    return 0;
} // enda main