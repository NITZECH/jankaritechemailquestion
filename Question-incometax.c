#include <stdio.h>


int main(void)
{
   
    float income, tax;
    int gender;

   
        
        printf("Input your annual income:\t");
        scanf("%f", &income);
printf ("enter your gender \n 1 for make \n 2  for female :");
scanf ("%d",&gender);
               if (income < 400000) {
            tax = 0;                                           
        }
else if (income == 400000){

tax=4000;}
        else if (income <= 500000) {
            tax = (income - 400000) * 0.1 + 4000;                 
        }

        else if (income <= 700000) {
            tax = (income - 500000) * 0.2 + 9000;        
        }

        else if (income <= 2000000) {
            tax = (income - 1300000) * 0.3 + 109000;       
        }

        else {
            tax = (income - 200000) * 0.36+ 148000;      
        }
switch (gender)
{
        case 1:
        printf("\n\n\nYour tax is:\t %.2f Rupess\n\n\n", tax);
break;
case 2:
	printf ("\n\n\nYour tax is:\t %.2f Rupess with 10 percentage rebate\n" ,tax + tax*0.1);
     break;
     default:
     	printf ("wrong input ");
     }

    return 0;
}
