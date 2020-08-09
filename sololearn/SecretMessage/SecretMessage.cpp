/*
Author: chankruze (chankruze@geekofia.in)
Created: Sun Aug 09 2020 21:23:42 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <bits/stdc++.h>

#include <iostream>
#include <vector>

using namespace std;

string encodeWord(string str) {
    string enc = "";
    string alphabets = "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < str.length(); i++) {
        enc += alphabets[26 - alphabets.find(tolower(str[i]))];
    }

    return enc + " ";
}

int main(int argc, char const *argv[]) {
    string _in, word, encoded = "";
    getline(cin >> ws, _in);

    stringstream ss(_in);

    while (getline(ss, word, ' ')) {
        encoded += encodeWord(word);
    }

    cout << encoded << endl;
    return 0;
}
