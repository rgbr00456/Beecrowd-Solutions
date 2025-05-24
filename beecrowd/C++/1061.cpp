#include <iostream>
using namespace std;

int main()
{
    string diaInicial, diaFinal, separacao;

    int horaInicio;
    int minutoInicio;
    int segundosInicio;

    int horaFim;
    int minutoFim;
    int segundosFim;

    getline(cin, diaInicial);
    cin >> horaInicio >> separacao >> minutoInicio >> separacao >> segundoInicio;

    cin.ignore();
    getline(cin, diaFinal);
    cin >> horaFim >> separacao >> minutoFim >> separacao >> segundoFim;

    int inicioDia = stoi(diaInicial.substr(4));
    int fimDia = stoi(diaFinal.substr(4));

    int inicioTotal = inicioDia * 24 * 60 * 60 + horaInicio * 60 * 60 + minutoInicio * 60 + segundosInicio;

    int fimTotal = fimDia * 24 * 60 * 60 + horaFim * 60 * 60 + minutoFim * 60 + segundosFim;

    int duracao = fimTotal - inicioTotal;

    int dias = duracao / (24 * 60 * 60);
    duracao %= (24 * 60 * 60);

    int horas = duracao / (60 * 60);
    duracao %= (60 * 60);

    int minutos = duracao / 60;
    int segundos = duracao % 60;

    cout << dias << " dia(s)" << endl;
    cout << horas << " hora(s)" << endl;
    cout << minutos << " minuto(s)" << endl;
    cout << segundos << " segundo(s)" << endl;

    return 0;
} // end main