/*
Author: chankruze (chankruze@geekofia.in)
Created: Tue Aug 25 2020 21:24:53 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

bool isIsogram(string word) {
    unordered_set<char> set;

    for (char c : word) {
        set.insert(c);
    }

    return (word.length() == set.size());
}

int main(int argc, char const *argv[]) {
    string word;
    cin >> word;
    cout << (isIsogram(word) ? "true" : "false") << endl;
}
