#include <stdio.h>
#include <stdlib.h>

int main()
{
 float number1;
 float number2;
 float result;
 char  operation;
 printf("enter the first number\n");
 scanf("%f", &number1);
 printf("enter the operation (+,-,/,x)\n");
 scanf(" %c", &operation);
 printf("enter the second number\n");
 scanf("%f", &number2);
 //using the switch function to manipulate the different types operation given and the result of each one of them.

 switch (operation){

 case '+' : result= number1 + number2;
 break;

 case '-' : result= number1 - number2;
 break;

 case '/' : if (number2!= 0){
 result= number1 / number2;
 }
 else{
    printf("cant divide by 0 \n enter a new value ");
    return 1;
 }
 break;

 case 'x' : result= number1 * number2;
 break;


 }
 printf("the result is %f", result);

 return 0;
}

