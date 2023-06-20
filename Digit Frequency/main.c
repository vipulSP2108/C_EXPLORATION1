#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char *line = NULL;
    size_t bufsize = 0;
    getline(&line, &bufsize, stdin);
    int zeros = 0, ones = 0, twos = 0, threes = 0, fours = 0, fives = 0, sixs = 0, sevens = 0, eights = 0, nines = 0;
    for (int i = 0; i < strlen(line) ;i++){
        if (line[i] == '0'){
           zeros += 1;
        }
        if (line[i] == '1'){
           ones += 1;
        }
        if (line[i] == '2'){
           twos += 1;
        }
        if (line[i] == '3'){
           threes += 1;
        }
        if (line[i] == '4'){
           fours += 1;
        }
        if (line[i] == '5'){
           fives += 1;
        }
        if (line[i] == '6'){
           sixs += 1;
        }
        if (line[i] == '7'){
           sevens += 1;
        }
        if (line[i] == '8'){
           eights += 1;
        }
        if (line[i] == '9'){
           nines += 1;
        }
        
    }
    printf("%d ",zeros);
    printf("%d ",ones);
    printf("%d ",twos);
    printf("%d ",threes);
    printf("%d ",fours);
    printf("%d ",fives);
    printf("%d ",sixs);
    printf("%d ",sevens);
    printf("%d ",eights);
    printf("%d",nines);
    
}
