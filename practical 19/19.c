#include <stdio.h>

int main()
{
    int n, c = 1, k, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (k = 1; k <= n - i; k++)
        {
            printf(" ");
        }

        for (j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                c = 1;
            else
                c = c * (i - j + 1) / j;

            printf("%d ", c);
        }

        printf("\n");
    }

    return 0;
}

