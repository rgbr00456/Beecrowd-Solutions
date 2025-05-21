#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int cod1, cod2, qt1, qt2;
    double preco1, preco2;

    cin >> cod1 >> qt1 >> preco1;
    cin >> cod2 >> qt2 >> preco2;

    double total = (qt1 * preco1) + (qt2 * preco2);

    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << total << endl;

    return 0;
} // end main