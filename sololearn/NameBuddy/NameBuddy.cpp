/*
Author: chankruze (chankruze@geekofia.in)
Created: Thu Aug 27 2020 17:08:08 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
    string _IN, _NAME, myName;
    getline(cin, _IN);
    cin >> myName;

    stringstream buf(_IN);

    while (getline(buf, _NAME, ' ')) {
        if (toupper(_NAME.at(0)) == toupper(myName.at(0))) {
            cout << "Compare notes" << endl;
            return 0;
        }
    }

    cout << "No such luck" << endl;
}
