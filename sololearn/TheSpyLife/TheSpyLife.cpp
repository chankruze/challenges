/*
Author: chankruze (chankruze@geekofia.in)
Created: Tue Aug 11 2020 04:22:10 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

string remNonAlphaNumericChars(string& s) {
    int j = 0;
    for (int i = 0; i < s.size(); i++) {
        // Store only valid characters
        if ((s[i] >= 'A' && s[i] <= 'Z') ||
            (s[i] >= 'a' && s[i] <= 'z') || s[i] == ' ') {
            s[j] = s[i];
            j++;
        }
    }
    return s.substr(0, j);
}

int main(int argc, char const *argv[]) {
    string _str;
    getline(cin >> ws, _str);

    // reverse the cipher
    reverse(_str.begin(), _str.end());

    // replace any characters that are not a letter or a space
    cout << remNonAlphaNumericChars(_str) << endl;

    return 0;
}
