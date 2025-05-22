#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a, b, c, d;
    cin >> a >> b >> c >> d;

    double alunoEmExame = 0;
    cin >> alunoEmExame;

    double media = ((a * 2) + (b * 3) + (c * 4) + d) / 10;

    if (alunoEmExame > 0)
    {
        cout << fixed << setprecision(1);
        cout << "Media: " << media << endl;
        cout << "Aluno em exame." << endl;
        double mediaNova = (media + alunoEmExame) / 2;
        cout << fixed << setprecision(1);
        cout << "Nota do exame: " << alunoEmExame << endl;

        if (mediaNova >= 5.0)
        {
            cout << "Aluno aprovado." << endl;
            cout << fixed << setprecision(1);
            cout << "Media final: " << mediaNova << endl;
        }
        else
        {
            cout << "Aluno reprovado." << endl;
            cout << fixed << setprecision(1);
            cout << "Media final: " << mediaNova << endl;
        }
    }

    else if (media >= 7.0)
    {
        cout << fixed << setprecision(1);
        cout << "Media: " << media << endl;
        cout << "Aluno aprovado." << endl;
    }
    else
    {
        cout << fixed << setprecision(1);
        cout << "Media: " << media << endl;
        cout << "Aluno reprovado." << endl;
    }

    return 0;
} // end main