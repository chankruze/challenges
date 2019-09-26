/*
 * @Author: chankruze (Chandan Kumar Mandal) 
 * @Date: 2019-09-26 05:32:45 
 * @Last Modified by: chankruze (Chandan Kumar Mandal)
 * @Last Modified time: 2019-09-26 05:48:33
 */

/*
Print full pyramid of letter in a name provided

      c 
     c h 
    c h a 
   c h a n 
  c h a n d 
 c h a n d a 
c h a n d a n

*/

#include "../../../GitHub/c-libs/stdgeekofia.h"

int main() {
    int i, j, max_row, space;
    char name[100];

    printf("Enter the number of row you want:\n");
    scanf("%s", name);
    clearScr();
    
    max_row = strlen(name);
    space = max_row;

    for (i = 0; i <= max_row; i++, space--){
        for (j = 0; j < space; j++){
            printf(" ");
        }

        for (j = 0; j < i; j++){
            printf("%c ", name[j]);
        }
        
        printf("\n");
    }
    return 0;
}