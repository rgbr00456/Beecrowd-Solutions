#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int horas = N / 3600;
    int minutos = (N % 3600) / 60;
    int segundos = N % 60;

    cout << horas << ":" << minutos << ":" << segundos << endl;

    return 0;
} // end main