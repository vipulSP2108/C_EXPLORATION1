#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    
    int val = 0;
    int num1 = num - 1;
    int j = 0;
    while (j <= num1){
        val = *(arr + j);
        // printf("%d\n", val);
        *(arr + j) = *(arr + num1);
        *(arr + num1) = val;
        // printf("%d\n", *(arr + num1 - 1));
        num1--;
        j++;
    }
    /* Write the logic to reverse the array. */

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
