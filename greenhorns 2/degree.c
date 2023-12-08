#include <stdio.h>

int main()
{

    //  celsius fahrenheit

    float fahrenheit, celsius;
    printf(" \nEnter celsius : ");
    scanf("a %d :", celsius);
    fahrenheit = ((celsius * 8) / 10) + 20;
    printf("\nTemperature in fahrenheit is:  %f", fahrenheit);

    return 0;
}
