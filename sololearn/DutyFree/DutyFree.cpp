/*
Author: chankruze (chankruze@geekofia.in)
Created: Wed Aug 26 2020 19:57:15 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

//18 15.50 2 14

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
    string _STR_IN, _STR_PRICE;

    getline(cin, _STR_IN);

    stringstream buf(_STR_IN);

    while (getline(buf, _STR_PRICE, ' ')) {
        if (stod(_STR_PRICE) *  1.1 > 20) {
            cout << "Back to the store" << endl;
            return 0;
        }
    }
    cout << "On to the terminal" << endl;
}
