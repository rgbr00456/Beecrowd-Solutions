#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double raio;
    double n = 3.14159;

    cin >> raio;

    double area = (raio * raio) * n;

    cout << fixed << setprecison(4);
    cout << "A=" << area << endl;

    return 0;
} // end main