#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n, i, j, k, max;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    max = 2*(n-1);

    for(i = 0; i <= max; i++){
        k = n;
        for(j = 0; j <= max; j++){
            printf("%d ", k);
            if(i > j){
                k -= 1;
            }
            if(i + j >= max){
                k += 1;
            }
        }
        printf("\n");
    }
    return 0;
}