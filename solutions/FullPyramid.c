/*
 * @Author: chankruze (Chandan Kumar Mandal) 
 * @Date: 2019-09-26 01:49:18
 * @Last Modified by: chankruze (Chandan Kumar Mandal)
 * @Last Modified time: 2019-09-26 04:52:26
 */

/* Print full number pyramid like below for given number of rows

   * 
  * * 
 * * * 
* * * *

*/

#include "../../../GitHub/c-libs/stdgeekofia.h"

int main() {
    int i, j, max_row, space;

    printf("Enter the number of row you want:\n");
    scanf("%d", &max_row);
    clearScr();
    space = max_row; 

    for (i = 0; i <= max_row; i++, space--){
        for (j = 0; j < space; j++){
            printf(" ");
        }

        for (j = 0; j < i; j++){
            printf("* ");
        }

        printf("\n");
    }
    return 0;
}