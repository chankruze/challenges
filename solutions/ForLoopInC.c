#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define NUMBER_OF_STRING 9
#define MAX_STRING_SIZE 10

int main(){
    int a, b, i;
    scanf("%d\n%d", &a, &b);
  	
    // Complete the code.
    char arr[NUMBER_OF_STRING][MAX_STRING_SIZE] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

    i = a;

    while (i <= b){
        for (NULL; i >= 1 && i <= 9 && i <= b; i++){
            printf("%s\n", arr[i-1]);
        }

        if (i > 9){
            if (i % 2 == 0){
                printf("even\n");
            }
            else{
                printf("odd\n");
            }
        }
        
        i++;
    }
    return 0;
}