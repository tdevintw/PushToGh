#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int i;
    printf("donner le nombre que tu veux miltuplier\n");
    scanf("%d",&num);
    for(i=0;i<10;i++){
        printf("%d x %d = %d\n",num,i+1,(num*(i+1)));
    }
    return 0;
}
