#include <stdio.h>
#define MAX_DIGITS 500

// For [-Wimplicit-function-declaration]
void factorial(int n);

int calc_res_size(int x, int result[], int result_size);

int main() {

    int totalNums, num;

    scanf("%d", &totalNums);

    int nums[totalNums];

    for (int i = 0; i < totalNums; i++) {
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < totalNums; i++) {
        factorial(nums[i]);
        printf("\n");
    }
    
    return 0; 
}

// Custom function to calculte result size
int calc_res_size(int x, int result[], int result_size) {

    int carry = 0;

    for (int i = 0; i < result_size; i++) {

        int product = result[i] * x + carry; 
  
        // store last digit of 'product' in result array  
        result[i] = product % 10;   
  
        // put rest in carry 
        carry  = product / 10;     
    } 
  
    // put carry in result and increase result size 
    while (carry) {
        result[result_size] = carry % 10;
        carry = carry / 10;
        result_size++; 
    }

    return result_size; 
}

// Custom factorial function
void factorial(int n) {

    int result[MAX_DIGITS]; 

    // Init result
    result[0] = 1; 
    int result_size = 1;

    // formula of n!
    for (int x = 2; x <= n; x++) {
        result_size = calc_res_size(x, result, result_size); 
    }

    for (int i = result_size-1; i >= 0; i--) {
        printf("%d", result[i]); 
    }  
}
