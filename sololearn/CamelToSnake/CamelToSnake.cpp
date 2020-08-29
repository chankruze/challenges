/*
Author: chankruze (chankruze@geekofia.in)
Created: Sat Aug 29 2020 23:08:42 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
    string strIn, newStr = "";
    cin >> strIn;

    for (int i = 0; i < strIn.length(); i++) {
        char c = strIn.at(i);

        if (c == toupper(c)) {
            strIn = strIn.substr(0, i) + "_" + (char)tolower(c) + strIn.substr(i + 1);
        }
    }

    cout << strIn << endl;
}
