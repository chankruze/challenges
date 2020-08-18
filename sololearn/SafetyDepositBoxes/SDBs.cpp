/*
Author: chankruze (chankruze@geekofia.in)
Created: Tue Aug 18 2020 08:17:31 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
    string _RAW_IN, crrItem, reqItem;
    getline(cin, _RAW_IN);
    getline(cin, reqItem);

    stringstream ss(_RAW_IN);

    int i = 1;
    while (getline(ss, crrItem, ',')) {
        if (crrItem == reqItem) {
            cout << (i * 5) << endl;
            return 0;
        }
        ++i;
    }
}
