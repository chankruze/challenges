/*
 * @Author: chankruze (Chandan Kumar Mandal) 
 * @Date: 2019-09-26 02:47:08 
 * @Last Modified by: chankruze (Chandan Kumar Mandal)
 * @Last Modified time: 2019-09-26 04:50:00
 */

/* Print full number pyramid like below for given number of rows

     1 
    1 2 
   1 2 3 
  1 2 3 4 
 1 2 3 4 5

*/

#include "../../../GitHub/c-libs/stdgeekofia.h"

int main() {
    int i, j, max_row, space;

    printf("Enter the number of row you want:\n");
    scanf("%d", &max_row);
    clearScr();
    space = max_row - 1; 

    for (i = 1; i <= max_row; i++, space--){
        for (j = 0; j < space; j++){
            printf(" ");
        }

        for (j = 0; j < i; j++){
            printf("%d ", j + 1);
        }

        printf("\n");
    }
    return 0;
}