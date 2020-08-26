/*
Author: chankruze (chankruze@geekofia.in)
Created: Wed Aug 26 2020 05:00:15 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    string sounds = "";
    int riceKrispies;

    for (int i = 0; i < 6; i++) {
        cin >> riceKrispies;

        if (riceKrispies % 3 != 0) {
            sounds += (riceKrispies % 2 == 0) ? " Crackle" : " Snap";
        } else {
            sounds += " Pop";
        }
    }

    cout << sounds.substr(1) << endl;
}
