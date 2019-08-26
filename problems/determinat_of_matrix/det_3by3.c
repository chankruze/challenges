#include <stdio.h>

void main (){
    int a[3][3], i, j;
    long det;

    printf("Enter 4 elements of the matrix\n");

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Entered matrix is\n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    
    det = a[0][0] * (a[1][1] * a[2][2] - a[1][2] * a[2][1])
     - a[0][1] * (a[1][0] * a[2][2] - a[1][2] * a[2][0])
     + a[0][2] * (a[1][0] * a[2][1] - a[1][1] * a[2][0]);
    printf("Determinat of above matrix is : %ld\n", det);
}