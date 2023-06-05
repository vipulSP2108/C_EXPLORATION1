#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
  int n;
  scanf("%d", &n);

  // M1
  int sum2 = 0;
  for (int i = 1; i<=10000; i=i*10){
    sum2 = sum2 + (n%(10*i))/i;
  }
  printf("%d\n",sum2);

  // M2
  int sum1 = 0;
  for (int i = 1; i<=10000; i=i*10){
    sum1 = sum1 + n%10;
    n = n/10;
  }
  printf("%d\n",sum1);

  return 0;
}
