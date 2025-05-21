#include <iostream>
#include <iomanip:
using namespace std;

int main()
{

    int funcionario;
    cin >> funcionario;

    int horas;
    cin >> horas;

    double salarioHora;
    cin >> salarioHora;

    double salario = horas * salarioHora;

    cout << fixed << setprecision(2);
    cout << "NUMBER = " << funcionario << endl;
    cout << "SALARY = U$ " << salario << endl;
    return 0;
} // end main
