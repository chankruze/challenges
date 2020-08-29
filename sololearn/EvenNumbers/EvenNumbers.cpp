/*
Author: chankruze (chankruze@geekofia.in)
Created: Thu Aug 27 2020 18:18:26 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
    string _IN, _NUM, evens = "";

    getline(cin, _IN);

    stringstream buf(_IN);

    while (getline(buf, _NUM, ' ')) {
        if (stoi(_NUM) % 2 == 0) {
            evens += " " + _NUM;
        }
    }

    cout << evens.substr(1) << endl;
}
