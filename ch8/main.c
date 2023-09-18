#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("combien y a t il des notes (1,2,3,4..etc)\n");
    scanf("%d",&n);
    int tableau[n];
    int i;
    int sum;
    for(i=0;i<n;i++){
        printf("entrer la note %d\n",i+1);
        scanf("%d",&tableau[i]);
        sum += tableau[i]; //sum(new value) = tableau[i]+sum(old value);
    }
    printf("la moyenne general est %d et ",sum/n);
    if((sum/n)<10){
        printf("la mention est recalé");
    }
     else if((sum/n)>=10 && (sum/n)<12){
        printf("la mention est passable");
    }
    else if((sum/n)>=12 && (sum/n)<14) {
         printf("la mention est moyenne");
    }
        else if((sum/n)>=14 && (sum/n)<16) {
         printf("la mention est bien");
    }
        else{
         printf("la mention est trés bien");
    }
    return 0;
}

