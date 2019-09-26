/*
 * @Author: chankruze (Chandan Kumar Mandal) 
 * @Date: 2019-09-26 03:25:37
 * @Last Modified by: chankruze (Chandan Kumar Mandal)
 * @Last Modified time: 2019-09-26 06:29:55
 */

// Print smiley to whole screen

#include "../../../GitHub/c-libs/stdgeekofia.h"

int main(){
    clearScr();
    struct winsize terminal;
    getTerminal(&terminal);

    // smiley takes 2 character to print properly, if we don't adjust 2 cols to print 1 emoji
    // it will push each emoji to 1 col right which eventually increases row, noticed just now

    // it also fixes the starting white space on each even line (if cols are odd it leaves one col to each line end)
    int max_col = terminal.ws_col / 2;

    for (int i = 0; i < terminal.ws_row; i++){
        for (int j = 0; j < max_col; j++){
            printf(SMILEY);
        }
        printf("\n");
    }

    return 0;
}