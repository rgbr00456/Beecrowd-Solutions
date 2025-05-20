#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if ((n % 2) == 0)
    {
        n = n + 1;
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", n + i * 2);
    }

    return 0;
} // end main