#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double salario, novoSalario, reajuste;
    cin >> salario;

    if (salario >= 0 && salario <= 400.00)
    {
        novoSalario = salario * 0.15;
        reajuste = novoSalario - salario;
        cout << fixed << setprecion(2);
        cout << "Novo salario: " << novoSalario << endl
             << "Reajuste ganho: " << reajuste << endl
             << "Em percentual: 15 %" << endl;
    }
    else if (salario > 400.00 && salario <= 800.00)
    {
        novoSalario = salario * 0.12;
        reajuste = novoSalario - salario;
        cout << fixed << setprecion(2);
        cout << "Novo salario: " << novoSalario << endl
             << "Reajuste ganho: " << reajuste << endl
             << "Em percentual: 12 %" << endl;
    }
    else if (salario > 800.00 && salario <= 1200.00)
    {
        novoSalario = salario * 0.10;
        reajuste = novoSalario - salario;
        cout << fixed << setprecion(2);
        cout << "Novo salario: " << novoSalario << endl
             << "Reajuste ganho: " << reajuste << endl
             << "Em percentual: 10 %" << endl;
    }
    else if (salario > 1200.00 && salario <= 2000.00)
    {
        novoSalario = salario * 0.07;
        reajuste = novoSalario - salario;
        cout << fixed << setprecion(2);
        cout << "Novo salario: " << novoSalario << endl
             << "Reajuste ganho: " << reajuste << endl
             << "Em percentual: 7 %" << endl;
    }
    else if (salario > 2000.00)
    {
        novoSalario = salario * 0.04;
        reajuste = novoSalario - salario;
        cout << fixed << setprecion(2);
        cout << "Novo salario: " << novoSalario << endl
             << "Reajuste ganho: " << reajuste << endl
             << "Em percentual: 4 %" << endl;
    }
    return 0;
} // end main