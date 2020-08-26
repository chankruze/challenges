/*
Author: chankruze (chankruze@geekofia.in)
Created: Wed Aug 26 2020 05:14:11 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

#define println(x) cout << x << endl

string toHex(int num) {
    string hexDigits = "0123456789abcdef";
    string hex = "";
    int len = to_string(num).length();

    if (num < 16) {
        return to_string(hexDigits[num]);
    }
    else {
        double numd = (double)num;
        while (numd > 15.0) {
            numd /= 16.0;
        }

        int digit_0 = floor(numd);
        hex += hexDigits.at(digit_0);
        double rem = numd - digit_0;

        while (rem != 0.0) {
            rem *= 16.0;
            hex += hexDigits[floor(rem)];
            rem -= floor(rem);
        }

        return hex;
    }
}

int main(int argc, char const* argv[]) {
    int r, g, b;
    cin >> r >> g >> b;

    // println(toHex(r));
    // println(toHex(g));
    // println(toHex(b));

    cout << "#" << toHex(r) << toHex(g) << toHex(b) << endl;
}
