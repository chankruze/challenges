/*
Author: chankruze (chankruze@geekofia.in)
Created: Mon Aug 17 2020 18:25:51 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int permute(string str) {
    int i = 1;
    string word = str;
    // Sort the string in lexicographically
    // ascennding order
    sort(str.begin(), str.end());

    // Keep printing next permutation while there
    // is next permutation
    do {
        if (str == word) {
            return i;
        }

        i++;
    } while (next_permutation(str.begin(), str.end()));

    return 0;
}

int main(int argc, char const *argv[]) {
    string word;
    cin >> word;
    cout << permute(word) << endl;
}
