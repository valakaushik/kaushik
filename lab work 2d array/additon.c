#include <stdio.h>
int main()
{
    int a[20][20], i, j, m, n, sum = 0;
    float avr;

    printf("Enter size of row and colum array :");
    scanf("%d %d", &m, &n);

    printf("Enter element : \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf(" emter aaray ::\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum = sum + a[i][j];
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("All sum Element %d \n", sum);
    return 0;
}