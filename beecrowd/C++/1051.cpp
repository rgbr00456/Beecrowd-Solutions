#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double renda;
    cin >> renda;

    double imposto;
    double totalAPagar;

    if (renda >= 0.00 && a <= 2000.00)
    {
        cout << "Isento" << endl;
    }
    else
    {
        if (renda > 4500.00)
        {
            imposto += (renda - 4500) * 0.28;
            renda = 4500;
        }
        else if (renda > 3000.00)
        {
            imposto += (renda - 3000) * 0.18;
            renda = 3000;
        }
        else if (renda > 2000.00)
        {
            imposto += (renda - 2000) * 0.08;
            renda = 2000;
        }
    }

    cout << fixed << setprecision(2);
    cout << "R$ " << totalAPagar << endl;

    return 0;
} // end main