#include <stdio.h>
#include <math.h>

int main()
{

    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    double delta;
    double x1, x2;

    delta = b * b - 4 * a * c;

    if (delta < 0)
    {
        printf("Impossivel calcular\n");
    }
    else if (a == 0)
    {
        printf("Impossivel calcular\n");
    }
    else if (delta == 0)
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        printf("R1 = %.5lf\n", x1);
    }
    else
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("R1 = %.5lf\n", x1);
        printf("R2 = %.5lf\n", x2);
    }

    return 0;
} // end main