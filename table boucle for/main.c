#include <stdio.h>
#include <stdlib.h>

int main()
{


    int T[3];
    int i;

    printf("entrer les valeurs du tableau \n");


    for(i=0;i<3;i++){

        printf(" entrer le %d valeur ",i+1);
        scanf("%d",&T[i]);
    }

    for(i=0;i<3;i++){

        printf("la valeur de T[%d] = %d ",i+1,T[i]);

 }



    return 0;
}
