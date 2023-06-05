#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void one_to_nine(int num);

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	for (int i=a; i<=b; i++){
          if (i <= 9){
              one_to_nine(i);
          }
          else if (i%2 == 0){
              printf("even\n");
          }
          else{
              printf("odd\n");
          }
      }

    return 0;
}

void one_to_nine(int num){
    if (num == 1){
        printf("one\n");
    }
    else if (num == 2){
        printf("two\n");
    }
    else if (num == 3){
        printf("three\n");
    }
    else if (num == 4){
        printf("four\n");
    }
    else if (num == 5){
        printf("five\n");
    }
    else if (num == 6){
        printf("six\n");
    }
    else if (num == 7){
        printf("seven\n");
    }
    else if (num == 8){
        printf("eight\n");
    }
    else if (num == 9){
        printf("nine\n");
    }
}
