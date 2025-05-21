#include <iostream>
using namespace std;

int main()
{
    int idade;
    cin >> idade;

    int anos = idade / 365;
    int meses =  (idade % 365) / 30;
    int dias = (idade % 365) % 30;

    cout << anos << " ano(s)" << endl << meses << " mes(es)" << endl << dias << " dia(s)" << endl;

        return 0;
} // end main