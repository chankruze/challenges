/*
Author: chankruze (chankruze@geekofia.in)
Created: Tue Aug 11 2020 05:33:11 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <iostream>
#include <sstream>
#include <string>
#include <cmath> 

using namespace std;

int calcAvgLen(string& str) {
    int charCount = 0, wordsCount;
    string word;

    stringstream ss(str);

    while (getline(ss, word, ' ')) {
        ++wordsCount;
        charCount += word.length();
    }

    return round(charCount/wordsCount);
}

int main(int argc, char const* argv[]) {
    string _sen;
    getline(cin, _sen);

    cout << calcAvgLen(_sen) << endl;

    return 0;
}
