#include<stdio.h>
#include<unistd.h>

int main(){
  int choice;
   int num1,num2,results;

   while (1) {
    printf("**** Welcome to CLI Calculator ****\n");
    printf("------------------------------------\n");
    sleep(1);
    printf("**** Select an Operation ****\n");
    printf("-----------------------------------\n");
    printf("1.Addition\n");
    printf("2.Subraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Exit\n");
    printf("------------------------------------\n");
    printf("Enter your choice :");
    scanf("%d",&choice);

   if(choice == 5){
    printf("**** Thank you fot usisng CLI Calculator ****\n");
    printf("-----------------------------------------------\n");
    break;
     }
     char name [50];
     printf("Enter your name :");
     scanf("%s",name);
     
     printf("Enter first number %s sir :",name);
     scanf("%d", &num1);

     printf("Enter Second Number %s Sir:",name);
     scanf("%d",&num2);
     printf("-----------------------------------\n");

     switch(choice){
      case 1:
      results = num1 + num2 ;
      printf("**** Your Answer %d ****\n ",results);
      break;
      case 2:
      results = num1 - num2;
      printf("**** Your Answer: %d ****\n ",results);
      break;
      case 3:
      results = num1 * num2;
      printf("**** Your Answer: %d ****\n ",results);
      break;
      case 4:
      results = num1 / num2;
      printf("**** Your Answer: %d ****\n ",results);
      break;
      

     }
     printf("--------------------------\n");
    

  
   }
   return 0;
  
}