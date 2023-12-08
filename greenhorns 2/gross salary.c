#include<stdio.h>

int main(){
 

int p,hr,da,ta;



   printf(" Enter your salary:");
   scanf("%d",&p);

   printf("\n hr %d", hr=p*10/100);
   printf("\n da %d", da=p*10/100);
   printf("\n ta %d", ta=p*10/100);


   printf("\nBasic salary %d",p+hr+da+ta);
   

  return 0;
}