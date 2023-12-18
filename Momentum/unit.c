#include <stdio.h>

int main()
{
    float unit,bill,GST,total;
    
    printf("input of unit :");
    scanf("%f",&unit);
    
    if(unit<=50){
        bill= unit*.50;
    }
    else if(unit>=51 && unit<=150){
        bill= 25+(unit-50)*0.75;
    }
    else if(unit>=151 && unit <=250){
        bill=100+(unit-150)*1.20;
    }
    else{
        bill= 220+(unit-250)*1.50;
    }
    
    GST=bill*20/100;
    total=bill+GST;
    
    printf("\nyour bill is %f",bill);
    printf("\nyour GST is %f",GST);
    printf("\nyour total is %f",total);
    
    

    return 0;
}