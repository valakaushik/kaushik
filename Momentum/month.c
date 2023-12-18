#include <stdio.h>

int main()
{
     char s;
     printf("Enter charater :");
     scanf("%c",&s);
     
     switch(s){
         case 'm': 
         printf("\nmonday");
         break;
           case 't': 
         printf("\ntuesday and thusday");
         break;
           case 'w': 
         printf("\nwednesday");
         break;
           case 'f': 
         printf("\nfriday");
         break;
           case 's': 
         printf("\nsaturday and sunday");
         break;
           case 'M': 
         printf("\nmonday");
         break;
        case 'T': 
         printf("\ntuesday and thusday");
         break;
           case 'W': 
         printf("\nwednesday");
         break;
           case 'F': 
         printf("\nfriday");
         break;
           case 'S': 
         printf("\nsaturday and sunday");
         break;
         
         default:
         printf("you enter invelid charater");
         
     }
     

    return 0;
}