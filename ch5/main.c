#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
int num;
char date[50];
int result;
int coefficient;
printf("entrer le nombre des années tu veux convertir\n");
scanf("%d",&num);
printf("convertir a :(mois , jours ,heures , second)\n");
scanf("%s",&date);
if (num>=4){
if((num%4)==0){
    coefficient= num/4;
}
else if(num%4!=0){
    coefficient=(num-(num%4))/4;
}
}
else if(num<4){
    coefficient=0;
};
 if(strcmp(date, "mois")==0){
    result = (num*12)+(coefficient/30);
 }
 else if(strcmp(date, "hours")==0){
    result = (num*12*30)+coefficient;
 }
 else if(strcmp(date, "heures")==0){
 result = (num*12*30*24)+(coefficient*24);
 }
 else if(strcmp(date, "secondes")==0){
  result =( num*12*30*24*60*60)+(coefficient*24*60*60);
 }
else {
        printf("enter un valide proposition(mois , jours , heures , secondes)\n");
    };
printf("the result is :%d",result);
return 0;
}
