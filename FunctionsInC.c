#include <stdio.h>

int max_of_four(int a, int b, int c, int d){
    int max_num;

    int check_one = a > b ? a : b;
    int check_two = c > d ? c : d;

    return (check_one > check_two) ? check_one : check_two;
}

int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}