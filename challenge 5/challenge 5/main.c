#include <stdio.h>
#include <stdlib.h>

int main()
{
    float X1;
    float Y1;
    float X2;
    float Y2;
    float result;
    printf("enter the coordinates of M(x1,y1)\n");
    scanf("%f %f",&X1,&Y1);
    printf("enter the coordinates of N \n");
    scanf("%f %f",&X2,&Y2);
    result = sqrt(pow((X2-X1),2)+pow((Y2-Y1),2));
    printf("the distance is %f",result);
    return 0;
}
