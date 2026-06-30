#include <stdio.h>

int main()
{
    int a, b;

    printf("ax + b\n");

    printf("a: ");
    scanf("%d", &a);

    printf("b: ");
    scanf("%d", &b);

    printf("\n");

    if (a == 0 && b == 0)
    {
        printf("y = 0\n");
    }
    else if (a == 0)
    {
        printf("y = %d\n", b);
    }
    else if (b == 0)
    {
        if (a == 1)
            printf("y = x\n");
        else
            printf("y = %dx\n", a);
    }
    else
    {
        if (a == 1)
            printf("y = x + %d\n", b);
        else
            printf("y = %dx + %d\n", a, b);
    }

    if (a == 0)
    {
        printf("Not a valid equation (a = 0)\n");
    }
    else
    {
        printf("x = %.1f\n", -((float)b / a));
    }
    return 0;
}