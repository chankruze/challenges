#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int length, sum;
    scanf("%d", &length);
    int arr[length];

    for(int i = 0; i < length; i++){
       scanf("%d", &arr[i]);
    }

    for(int i = 0; i < length; i++){
       sum += arr[i];
    }

    printf("%d", sum);

    return 0;
}