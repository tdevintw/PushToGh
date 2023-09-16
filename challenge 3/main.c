#include <stdio.h>
#include <stdlib.h>

int main()
{
float a;
float b;
float mod;
float sub;
sub=a/b;
mod = a-((int)sub*b);
printf("enter number a\n");
scanf("%f",&a);
printf("enter number b\n");
scanf("%f",&b);
printf("the sum is %f\n",a+b);
printf("the sub is %f\n",a-b);
printf("the multiplication is %f\n",a*b);
printf("the division is %f\n",a/b);
sub=a/b;
mod = a-((int)sub*b);
printf("the rest of the division is %f\n",mod);

}
