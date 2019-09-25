/*
 * @Author: chankruze (Chandan Kumar Mandal) 
 * @Date: 2019-09-26 03:25:37
 * @Last Modified by: chankruze (Chandan Kumar Mandal)
 * @Last Modified time: 2019-09-26 04:48:48
 */

// Print smiley to whole screen

#include "../../../GitHub/c-libs/stdgeekofia.h"

int main(){
    clearScr();
    struct winsize terminal;
    getTerminal(&terminal);

    for (int i = 0; i < terminal.ws_row; i++){
        for (int j = 0; j < terminal.ws_col; j++){
            printf(SMILEY);
        }
        printf("\n");
    }

    return 0;
}