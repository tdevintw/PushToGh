#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random number between 0 and 6 (inclusive) for days
    int randomDay = rand() % 7;
    switch(randomDay){
     case 0 :printf("monday");
     break;
      case 1 : printf("tuesday");
      break;
       case 2 :printf("thursday");
       break;
       case 3 :printf("wednesday");
       break;
      case 4 : printf("friday");
      break;
      case 5 : printf("saturday");
      break;
      case 6 :printf("sunday");
      break;
    }
return 0;
}
