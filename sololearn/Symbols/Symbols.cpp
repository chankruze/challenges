/*
Author: chankruze (chankruze@geekofia.in)
Created: Tue Aug 11 2020 05:10:41 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <iostream>
#include <string>

using namespace std;

string remNonAlphaNumChar(string& str) {
    int j = 0;
    for (int i = 0; i < str.length(); i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= 'a' && str[i] <= 'z') || str[i] == ' ') {
                str[j] = str[i];
                ++j;
        }
    }

    return str.substr(0, j);
}

int main(int argc, char const* argv[]) {
    string _txt;
    getline(cin >> ws, _txt);

    cout << remNonAlphaNumChar(_txt) << endl;;

    return 0;
}
