#include<stdio.h>
// 7
int main(){
    
    char i,j;

    for(i='a';i<='e';i++){ 
        for(j=i;j>='a';j--){
            printf(" %c",j);
        }
        printf("\n");

    }


    return 0;
}