[0:26 pm, 20/12/2023] het R&W: #include <stdio.h>

int main() {
    int units;
    float charge;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    float bill = 0.0;
    float extra_charge = 0.0;

    if (units <= 50) {
        charge = 0.50; // charge per unit for first 50 units
        bill = units * charge;
    } else if (units <= 150) {
        charge = 0.75; // charge per unit for units between 51 to 150
        bill = 50 * 0.50; // charge for first 50 units
        int additional_units = units - 50;
        bill += additional_units * charge;
    } else if (units <= 200) {
        charge = 1.20; // charge per unit for units between 151 to 200
        bill = 50 * 0.50; // charge for first 50 units
        bill += 100 * 0.75; // charge for units between …
[0:27 pm, 20/12/2023] het R&W: #include<stdio.h>
int main(){
  int in,out;
  printf("\n enter your choice");
  printf("\n press 1 for english.");
  printf("\n hindi ke liye 2 dabayein.");
  printf("\n gujrati mate 3 dabavo");
  scanf("\n %d",&in);

  switch(in){
    case 1: 
    printf("\n press 1 for recharge");
    printf("\n press 2 for help");
    printf("\n press 3 for exit");
    scanf("%d",&out);          

      switch(out){
        case 1:
             printf("\n recharge successfull");
              break;
         case 2:
             printf("\n we are happy to help you.!");
              break;
         case 3:
             printf("\n exit ok.");
              break;
          default :
              printf("\n invalid choice.");
              break;
        }
    break;


    case 2: 
    printf("\n recharge karne ke liye 1 dabayein");
    printf("\n sahayta prapt karne k liye 2 dabayein");
    printf("\n exit karne k lie 3 dadbayein");
    scanf("\n enter your choice %d",&out);   

      switch(out){
        case 1:
         printf("\n aapka recharge safaltapurvak ho gaya. ");
        break;
        case 2:
         printf("\n aapki sahayta prakriya purnn hui. ");
        break;

        case 3:
         printf("\n exit ok. ");
        break;

        default :
      printf("\n invalid choice.");
      break;

      }
    break;


    case 3: 
    printf("\n recharge krwa mate 1 dabavo.");
    printf("\n sahayta prapt karwa mate 2 dabavo.");
    printf("\n exit karwa mate 3 dabavo.");
    scanf("%d",&out);    
    // break;
      switch(out){
        case 1:
         printf("\n tamaro recharge safaltapurvak thai gayu.");
        break;

        case 2:
         printf("\n tamari sahayta prakriya purnn thai.");
        break;

        case 3:
         printf("\n exit ok.");
        break;

          default :
          printf("\n invalid choice.");
          break;
      }
    break;
  }

  return 0;
}
