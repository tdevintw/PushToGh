#include <stdio.h>
#include <stdlib.h>

int main()
{
int number;
int stocker;
printf("enter a number that contains 3 chiffre\n");
scanf("%d",&number);
int chiffre1 = (int)(number/100);
int chiffre2 =(int)((number - chiffre1*100)/10);
int chiffre3 = (number - (chiffre1*100+chiffre2*10));
stocker = chiffre1;
chiffre1 = chiffre3;
chiffre3 = stocker;
printf("the new number is:%d%d%d",chiffre1,chiffre2,chiffre3);
    return 0;
}
