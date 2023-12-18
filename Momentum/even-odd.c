#include <stdio.h>

int main()
{
    int c;
    printf("Enter odd or even number :");
    scanf("%d",&c);
    
    (c%2==0)?printf("number is even"):printf("number is odd");
    
    return 0;
}