/*
Author: chankruze (chankruze@geekofia.in)
Created: Mon Aug 10 2020 17:31:31 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <iostream>

using namespace std;

int main() {
    int a;
    cout << "Enter no. of yards: ";
    cin >> a;

    if (a > 10) {
        cout << "High Five" << endl;
    } else if (a < 1) {
        cout << "shh" << endl;
    } else {
        for (size_t i = 0; i < a; i++) {
            cout << "Ra! ";
        }
        cout << "" << endl;
    }

    return 0;
}