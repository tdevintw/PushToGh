#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("entrer un alphabet\n");
    scanf(" %c",&ch);
    int ascii= (int)ch;
    printf("the ascii of %c is %d\n",ch,ascii);
    if(ascii<=90 && ascii>=65){
         printf(" %c est alpahbet majescule",ch);
    }
    else{
      printf(" %c n'est pas un alpahbet majescule",ch);
    }
    return 0;
}
