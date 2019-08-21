#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.
int find_nth_term(int n, int a, int b, int c) {

    int sum_n1;
    int sum_n2;
    int sum_n3;

    switch(n){
        case 1:
            return a;
        case 2:
            return b;
        case 3:
            return c;
        default:
            sum_n1 = find_nth_term(n-1, a, b, c);
            sum_n2 = find_nth_term(n-2, a, b, c);
            sum_n3 = find_nth_term(n-3, a, b, c);
            return sum_n1 + sum_n2 + sum_n3;
    }
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}

