#include <stdio.h>
int main()
{
    int a[20][20], i, j, m, n, sum = 0;
    float avr;

    printf("Enter size of row and colum array ::.");
    scanf("%d %d", &m, &n);

    printf("Enter array :: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf(" Enter element ::\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum = sum + a[i][j];
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    avr = (float)sum / (m + n);
    printf("all Sum Element %d \n", sum);
    printf("all Element Average %.2f", avr);
}