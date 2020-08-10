/*
Author: chankruze (chankruze@geekofia.in)
Created: Mon Aug 10 2020 18:21:08 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <bits/stdc++.h>

#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

string encodeToPig(string str) {
    return str.substr(1, str.length()) + str[0] + "ay ";
}

int main(int argc, char const *argv[]) {
    string _txt, _word;
    getline(cin >> ws, _txt);

    stringstream ss(_txt);

    while (getline(ss >> ws, _word, ' ')) {
        cout << encodeToPig(_word);
    }

    cout << "" << endl;

    return 0;
}
