#include <stdio.h>

int main()
{
    char ch;
    printf("Enter character :");
    scanf("%c",&ch);
    
    if (ch>='a' && ch<='z' || ch>='A' && ch<='Z')
    {
        printf("It is alphabet");
    }
    else if(ch>='0' && ch<='9'){
        printf("charater is number");
    }
    else{
        printf("It is special charater");
    }

    return 0;
}