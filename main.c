#include <stdio.h>
int main (){
    int number1;
    int number2;
    char operatorr;
    int resultt;
    printf("enter the first number\n");
    scanf("%d", &number1);
    printf("enter the second number\n");
    scanf("%d" , &number2);
    printf("what is the operator you want (+ ,- ,/,x)\n");
    scanf(" %c" , &operatorr);
    if (operatorr == '+'){
        resultt = number1 + number2 ;
    }
    else if (operatorr =='x'){
        resultt = number1 * number2 ;
    }
    else if (operatorr == '-'){

        resultt = number1 - number2 ;
    }
    else if (operatorr == '/'){
            if(number2!=0)
            {
               resultt = number1 / number2 ;
            }
            else{
                printf("cant divide a number by 0");
                return 1;
            }

    }
  printf("the result is %d" , resultt);
}
