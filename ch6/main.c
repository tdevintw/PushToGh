#include <stdio.h>
#include <stdlib.h>

int main()
{
int number;
printf("entrer le nombre:\n");
scanf("%d",&number);
if(number>0){
    printf("%d est un nombre positif",number);
}
else if(number<0) {
      printf("%d est un nombre negatif",number);
}
else{
        printf("%d est un nombre nul",number);
}
return 0;
}
