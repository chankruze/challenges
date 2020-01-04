#include <stdio.h>

int main() {
    int hr, min, res_cmp;
    char suffix[2];
    scanf("%d:%d %s", &hr, &min, &suffix);

    res_cmp = strcmp(suffix, "PM");

    // if PM
    if (res_cmp == 0) {
        // if hr != 12 --> +12
        if (hr != 12)
            hr += 12;    
    } else {
        // if hr == 12 -> 00
        if (hr == 12)
            hr = 00;
    }

    printf("%02d:%02d\n", hr, min);

    return 0;
}