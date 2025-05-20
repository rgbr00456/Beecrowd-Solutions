#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);

    int soma = 0;

    if (x > y)
    {
        int temporario = x;
        x = y;
        y = temporario;
    }

    for (int i = x + 1; i < y; i++)
    {
        if ((i % 2) != 0)
        {
            soma += i;
        }
    }

    printf("%d\n", soma);

    return 0;
} // end main