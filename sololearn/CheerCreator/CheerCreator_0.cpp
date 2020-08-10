/*
Author: ZaaWarudo (https://github.com/ZaaWarudo)
Co-Author: chankruze (chankruze@geekofia.in)
Created: Mon Aug 10 2020 17:03:03 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <iostream>

using namespace std;

string the_if(int *a) {
    string z = "";

    if (*a > 10) {
        return "High Five";
    } else if (*a <= 10 && *a >= 1) {
        for (int n = 1; n <= *a; n++) {
            for (int j = 0; j < 4; j++) {
                switch (j) {
                    case 0:
                        z += "R";
                        break;

                    case 1:
                        z += "a";
                        break;

                    case 2:
                        z += "!";
                        break;

                    default:
                        z += " ";
                        break;
                }
            }
        }
        return z;
    } else {
        return "shh";
    }
}
int main() {
    int a;
    cout << "Enter no. of yards: ";
    cin >> a;
    cout << the_if(&a) << endl;
    return 0;
}