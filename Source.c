#include <stdio.h>
void
clear(void)
{
    while (getchar() != '\n');
}

void main()
{
    for (;;)
    {
        float a, b = 0;
        float *x = &a;
        float *y = &b;
        float result = 0;
        printf("Insert first number\n");
        scanf_s("%f", x);
        printf("Insert second number\n");
        scanf_s("%f", y);
        printf("Select mathematical operation\n");
        clear();
        char c = getchar();
        switch (c)
        {
        case '+':
            result = a+b;
            printf("a + b = %.1f\n", result);
            break;
        case '-':
            result = a-b;
            printf("a - b = %.1f\n", result);
            break;
        case '*':
            result = a*b;
            printf("a * b = %.1f\n", result);
            break;
        case '/':
            result = a/b;
            printf("a / b = %.1f\n", result);
            break;
        }

        

    }
}

