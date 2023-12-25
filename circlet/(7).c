#include <stdio.h>
// 7
int main()
{

    int i;

    for (i = 1; i <= 5; i++)
    {
        if (i == 1 || i == 3)
        {
            printf("* * * * * ");
        }
        else
        {
            printf("*       *");
        }
        printf(" \n");
    }

    return 0;
}