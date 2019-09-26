/*
 * @Author: chankruze (Chandan Kumar Mandal) 
 * @Date: 2019-09-26 05:54:30 
 * @Last Modified by: chankruze (Chandan Kumar Mandal)
 * @Last Modified time: 2019-09-26 06:45:15
 */

// Print provided name to whole screen

#include "../../../GitHub/c-libs/stdgeekofia.h"

int main(){
    int max_col, len, curr_index;
    char name[100];

    printf("Enter your name:\n");
    scanf("%s", name);
    
    clearScr();

    struct winsize terminal;
    getTerminal(&terminal);

    len = strlen(name);
    curr_index = len;

    // adjust column so that printing name don't push increase row
    max_col = terminal.ws_col / len;

    for (int i = 0; i < terminal.ws_row; i++){

        // number of columns (here one column = length ot the name)
        for (int curr_col = 0; curr_col < max_col; curr_col++){
            // print the whole name once
            while (curr_index != 0){
                printf("%c", name[len - curr_index]);
                curr_index--;
            }
            curr_index = len;
        }
        printf("\n");
    }

    return 0;
}