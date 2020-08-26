/*
Author: chankruze (chankruze@geekofia.in)
Created: Tue Aug 25 2020 20:59:12 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <iostream>
#include <string>

using namespace std;

bool isVowel(char c) {
    switch (tolower(c)) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;
        default:
            return false;
    }
}

int main(int argc, char const *argv[]) {
    string word;
    int count;
    getline(cin, word);

    for (char c : word) {
        if (isVowel(c)) {
            count++;    
        }
    }

    cout << count << endl;
}
