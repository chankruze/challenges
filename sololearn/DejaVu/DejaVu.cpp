/*
Author: chankruze (chankruze@geekofia.in)
Created: Sun Aug 09 2020 19:41:17 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <algorithm>
#include <iostream>
#include <iterator>
#include <set>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
    string input;

    getline(cin >> ws, input);
    set<char> charSet(begin(input), end(input));

    if (input.length() != charSet.size()) {
        cout << "Deja Vu" << endl;
    } else {
        cout << "Unique" << endl;
    }

    return 0;
}
