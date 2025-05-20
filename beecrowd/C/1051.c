#include <stdio.h>

int main()
{
    double renda = 0;
    scanf("%lf", &renda);

    double impostoDeRenda = 0;

    if (renda <= 2000)
    {
        printf("Isento\n");
    }
    else
    {
        if (renda > 4500)
        {
            impostoDeRenda += (renda - 4500.00) * 0.28;
            renda = 4500;
        }
        if (renda > 3000)
        {
            impostoDeRenda += (renda - 3000.00) * 0.18;
            renda = 3000;
        }
        if (renda > 2000)
        {
            impostoDeRenda += (renda - 2000.00) * 0.08;
        }

        printf("R$ %.2lf\n", impostoDeRenda);
    }

    return 0;
} // end main