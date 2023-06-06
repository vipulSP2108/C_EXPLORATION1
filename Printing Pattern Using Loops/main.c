#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int size = (n*2) - 1;
    int i = 0;
    for(int row = 0; row < size; row++){
        int dupn = 0;
        int dupq = 0;
    
    // first half
        if (row < (size/2) + 1){
            for(int col = 0; col < size; col++){
                if (col < (size/2) + 1){
                    if (dupn < row){
                        printf("%d ",n - dupn);
                        dupn = dupn + 1;
                        continue;
                    }
                    printf("%d ", n - dupn);
                }
                else{
                    if (size - col <= dupn){
                        dupq = dupq + 1;
                        printf("%d ",(n - row) + dupq);
                        continue;
                    }
                    printf("%d ", (n - row));
                }
            }
        printf("\n");
        }
    
    // next half
        else{
            i = i + 1;
            for(int col = 0; col < size; col++){
                if (col < (size/2) + 1){
                    if (dupn < n - i){
                        printf("%d ",n - dupn);
                        dupn = dupn + 1;
                        continue;
                    }
                printf("%d ",(n - dupn) + 1);
                }
                else{
                    if (size - col <= dupn){
                        dupq = dupq + 1;
                        printf("%d ", (row - n) + dupq + 1);
                        continue;
                    }
                    printf("%d ", row - n + 2);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
