#include<stdio.h>
int main(){
  int a[50],b[40],c[30],i,n,m,k=0,total;

    printf("Enter size of array1:");
    scanf("%d",&m);
    printf("\nEnter elements::");
    for(i=0;i<m;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter size of array2:");
    scanf("%d",&n);
    printf("\nEnter elements::");
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    total=m+n;
    for(i=0;i<m;i++){
        c[i] = a[i];
    }
     for(i=m;i<total;i++){
        c[i] = b[k];
        k++;
    }




    return 0;
}