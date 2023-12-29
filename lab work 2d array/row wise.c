#include <stdio.h>
int main()
{
    int a[40][40], i, j, m, n, sum = 0;
    printf("Enter array:");
    scanf("%d", &n, &m);
    printf("\n Enter elements::");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n print all negative elements in an array  :\n");
    for (i = 0; i < n; i++)
    {
        sum = 0;
        for (j = 0; j < n; j++) {
            printf("%d",a[i][j]);
            sum = sum + a[i][j];
        
        }
        printf("Additon is %d\n",sum);
    }
    return 0;
}