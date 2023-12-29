#include <stdio.h>
int main()
{
    int a[50][50], m, n, i, j;
    printf(" Enter size row &coloms :");
    scanf("%d %d", &m, &n);

    printf("\nEnter Element:");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf(" %d", &a[i][j]);
        }
    }

    printf("\n enter elemnet:");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf(" %d", a[i][j]);
        }

        printf("\n");
    }
    return 0;
}