#include <stdio.h>
#include <stdlib.h>

int main()
{
int num1 , num2;
printf("enter 2 numbers to sum\n");
scanf("%d",&num1);
scanf("%d",&num2);
if(num1!=num2){
  printf("the sum between them is %d",num1+num2);
}
else{
    printf("since you entred the same number twice the result is: \n%d",(num1+num2)*3);
}
return 0;
}
