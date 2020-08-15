/*
Author: chankruze (chankruze@geekofia.in)
Created: Tue Aug 11 2020 18:09:14 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
    string word, temp;
    string wordArr[4];

    for (int i = 0; i < 4; i++) {
        cin >> wordArr[i];
    }

    for (int i = 0; i < 4; i++) {
        word = wordArr[i];
        temp = word;

        reverse(word.begin(), word.end());

        if (word == temp) {
            cout << "Open" << endl;
            return 0;
        }
    }

    cout << "Trash" << endl;

    return 0;
}
