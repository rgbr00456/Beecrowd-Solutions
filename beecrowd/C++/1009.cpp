#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string nome;
    cin >> nome;

    double salarioFixo;
    cin >> salarioFixo;

    double vendas;
    cin >> vendas;

    double comissao = vendas * 0.15;
    double salarioMes = comissao + salarioFixo;

    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << salarioMes << endl;

    return 0;
} // end main