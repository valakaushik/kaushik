#include<stdio.h>
// 1 
int main(){
    
    int i,j,k;

    for(i=1;i<=5;i++){

        for(k=i;k<=5;k++){
            printf("  ");
        }
        for(j=i;j>=1;j--){
            printf(" %d",j);
        }
        printf("\n ");
    }


    return 0;
}