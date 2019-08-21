#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
    printf("%d\n",((k-1)|k)<=n ? (k-1):(k-2));
    printf("%d\n",((k-1)&(k-2))==0 ? (k==3?0:(k-2)) : (k-1) );
    printf("%d\n", k-1);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}