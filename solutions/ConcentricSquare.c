#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n, i, j, k, max;
    printf("Enter a number from 0-9:\n");
    scanf("%d", &n);
    clrsr();
  	// Complete the code to print the pattern.
    max = 2*(n-1);

    if (n > 0 && n < 10){
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
    } else{
        printf("The code still works but the output is no more a concentric square.\nOnly single digits look beautiful.\n");
    }
    
    return 0;
}