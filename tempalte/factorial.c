#include <stdio.h>
int main()
{

    int i = 1, k = 1, n;
    printf("\n Enter no. :");
    scanf("%d", &n);

    while (i <= n)
    {
        k *= i;
        i++;
    }
    printf("\nfactorial is %d", k);
    return 0;
}