#include <stdio.h>

int main()
{
    double salario = 0;
    scanf("%lf", &salario);

    double novoSalario = 0;

    if (salario > 0 && salario <= 400)
    {
        novoSalario = salario * 1.15;
        double reajuste = novoSalario - salario;
        printf("Novo salario: %.2lf\n", novoSalario);
        printf("Reajuste ganho: %.2lf\n", reajuste);
        printf("Em percentual: 15 %\n");
    }
    else if (salario > 400 && salario <= 800)
    {
        novoSalario = salario * 1.12;
        double reajuste = novoSalario - salario;
        printf("Novo salario: %.2lf\n", novoSalario);
        printf("Reajuste ganho: %.2lf\n", reajuste);
        printf("Em percentual: 12 %\n");
    }
    else if (salario > 800 && salario <= 1200)
    {
        novoSalario = salario * 1.10;
        double reajuste = novoSalario - salario;
        printf("Novo salario: %.2lf\n", novoSalario);
        printf("Reajuste ganho: %.2lf\n", reajuste);
        printf("Em percentual: 10 %\n");
    }
    else if (salario > 1200 && salario <= 2000)
    {
        novoSalario = salario * 1.07;
        double reajuste = novoSalario - salario;
        printf("Novo salario: %.2lf\n", novoSalario);
        printf("Reajuste ganho: %.2lf\n", reajuste);
        printf("Em percentual: 7 %\n");
    }
    else if (salario > 2000)
    {
        novoSalario = salario * 1.04;
        double reajuste = novoSalario - salario;
        printf("Novo salario: %.2lf\n", novoSalario);
        printf("Reajuste ganho: %.2lf\n", reajuste);
        printf("Em percentual: 4 %\n");
    }

    return 0;
} // end main