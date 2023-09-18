#include <stdio.h>
#include <stdlib.h>

int main()
{
float a , b , c , delta;
printf("enter a ,b ,c les coefficients de l'équattion tq l'equation est sous forme de(ax^2+bx+c)\n");
scanf("%f",&a);
scanf("%f",&b);
scanf("%f",&c);
delta = (pow(b,2)-(4*a*c));
if(delta==0){
  printf("la solution de l'equation est x1=%f",-b/(2*a));
}
else if(delta>0) {
    printf("l'equation admet 2 solutions qui sont:x1=%f et x2=%f",(-b+sqrt(delta))/(2*a),(-b-sqrt(delta))/(2*a));
}
else {
 printf("l'équation admet un solution sous forme d'un nombre complexe qui est : x1= %f - ix(%f)",-b/2*a,sqrt(-delta)/2*a);
}
return 0;
}
