#include <stdio.h>
#include <stdlib.h>

int main()
{
char alp;
printf("enter un alphabet\n");
scanf(" %c",&alp);
int intt=(int)alp;
if(intt<65 || intt>90 && intt<97 || intt>122){
while(intt<65 || intt>90 && intt<97 || intt>122){
printf("entrer un alphabet(a,b,c...etc or A,B,....etc)\n");
scanf(" %c",&alp);
int intt=(int)alp;
if(intt>64 && intt<91 || intt>96 && intt<123){
    if(intt>64 && intt<91){
    printf(" %c est un alphabet majescule\n",alp);
}
else if(intt>96 && intt<123){
    printf(" %c est un alphabet miniscule\n",alp);
}
break;
}
}
}
else if(intt>64 && intt<91 || intt>96 && intt<123){
    if(intt>64 && intt<91){
    printf(" %c est un alphabet majescule\n",alp);
}
else if(intt>96 && intt<123){
    printf(" %c est un alphabet miniscule\n",alp);
}
}
return 0;
}
