#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d,m,y;
    char mois[10];
    printf("entrer une date sous forme de : d/m/y(ex:15/09/2012)\n");
    scanf("%d/%d/%d",&d,&m,&y);
    switch(m){
    case 1 : printf("%d-January-%d",d,y);
    break;
    case 2 : printf("%d-february-%d",d,y);
    break;
    case 3 : printf("%d-march-%d",d,y);
    break;
    case 4 :printf("%d-April-%d",d,y);
    break;
    case 5 : printf("%d-May,-%d",d,y);
    break;
    case 6 : printf("%d-June,-%d",d,y);
    break;
    case 7 : printf("%d- July-%d",d,y);
    break;
    case 8 : printf("%d-August-%d",d,y);
    break;
    case 9 : printf("%d-October-%d",d,y);
    break;
    case 10 : printf("%d-November-%d",d,y);
    break;
    case 11 : printf("%d-January-%d",d,y);
    break;
    case 12 : printf("%d-December-%d",d,y);
    break;
    }
    return 0;
}
