/*
Author: chankruze (chankruze@geekofia.in)
Created: Tue Aug 18 2020 13:28:12 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
    string code;
    cin >> code;

    int len = code.length();

    if (len == 5) {
        for (int i = 0; i < len; i++) {
            char c = code.at(i);

            if (!isdigit(c) || c == ' ') {
                cout << "false" << endl;
                return 0;
            }
        }
        cout << "true" << endl;
        return 0;
    }

    cout << "false" << endl;
    return 0;
}
