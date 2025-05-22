#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int codigo, quatidade;
    double total;

    cin >> codigo >> quatidade;

    if (codigo == 1)
    {
        total = quatidade * 4.00;
        cout << fixed << setprecision(2);
        cout << "Total: R$ " << total << endl;
    }
    else if (codigo == 2)
    {
        total = quatidade * 4.50;
        cout << fixed << setprecision(2);
        cout << "Total: R$ " << total << endl;
    }
    else if (codigo == 3)
    {
        total = quatidade * 5.00;
        cout << fixed << setprecision(2);
        cout << "Total: R$ " << total << endl;
    }
    else if (codigo == 4)
    {
        total = quatidade * 2.00;
        cout << fixed << setprecision(2);
        cout << "Total: R$ " << total << endl;
    }
    else if (codigo == 5)
    {
        total = quatidade * 1.50;
        cout << fixed << setprecision(2);
        cout << "Total: R$ " << total << endl;
    }

    return 0;
} // end main