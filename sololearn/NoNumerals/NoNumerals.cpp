/*
Author: chankruze (chankruze@geekofia.in)
Created: Mon Aug 10 2020 18:01:52 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <bits/stdc++.h>

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool checkNumber(string str) {
    for (int i = 0; i < str.length(); i++)
        if (isdigit(str[i]) == false)
            return false;
    return true;
}

int main(int argc, char const *argv[]) {
    string txt, word;
    vector<string> numerals = {"zero", "one", "two", "three", "four", "five",
                               "six", "seven", "eight", "nine", "ten"};

    getline(cin >> ws, txt);

    stringstream ss(txt);

    while (getline(ss >> ws, word, ' ')) {
        if (checkNumber(word)) {
            int num = stoi(word);
            if (num <= 10) {
                cout << numerals[stoi(word)];
            } else {
                cout << num;
            }
        } else {
            cout << word;
        }
        cout << " ";
    }
}
