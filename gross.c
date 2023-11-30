#include<stdio.h>

int main(){
 

int k,hr,da,ta;


printf("Enter your salary");
scanf("%d",&k);

printf("\nhr %d", hr=k*10/100);
printf("\nda %d", da=k*10/100);
printf("\nta %d", ta=k*10/100);

printf("Basic salary %d",k+hr+da+ta);

  return 0;
  
}
