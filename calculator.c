// 1. numbers  ,opertions, 
#include <stdio.h>
#include <math.h>  
#include <stdlib.h>  
void main(){
int n1 ,n2 , opt;
float res;
do{
printf("Enter the first number n1 : ");
scanf("%d" , &n1);
printf("Select an Operation in Calculation \n 1 Addition \t \t 2 Subtraction \n 3 Multipication \t \t 4 Division \n 5 Exit \n Make a choice : ");
scanf("%d" , &opt);
printf("Enter the second number n2 : ");
scanf("%d" , &n2);

switch(opt) {
case 1:
printf("You choose : %d \n" , opt);
printf("You choose Addition\n");
res  = n1 + n2;
printf("\nThe Addition of n1 and n2 is : %.2f" , res);
break; 
case 2:
printf("You choose : %d \n" , opt);
printf("You choose Subtraction\n");
res  = n1 - n2;
printf("\nThe Subtraction of n1 and n2 is : %.2f" , res);
break;
case 3:
printf("You choose : %d \n" , opt);
printf("You choose Multipication\n");
res  = n1 * n2;
printf("\nThe Multipication of n1 and n2 is : %.2f" , res);
break;
case 4:
printf("You choose : %d \n" , opt);
printf("You choose Division\n");
 if (n2 == 0)  
                {  
                    printf (" \n Divisor cannot be zero. Please enter another value ");  
                    scanf ("%d", &n2);        
                }  
            res = n1 / n2; 
   printf ("\nDivision of two numbers is: %.2f", res);  
            break;
case 5:
printf("You choose : %d \n" , opt);
printf ("You choose: Exit");  
            exit(0);   
            break;
      default:  
            printf(" Something is wrong!! ");  
            break;                        
    }  
    printf (" \n \n ********************************************** \n ");  
    } while (opt != 5);  
}
























