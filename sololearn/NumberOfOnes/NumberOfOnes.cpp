/*
Author: chankruze (chankruze@geekofia.in)
Created: Wed Aug 26 2020 03:39:18 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
    int x;
    // string bin = "";
    int count = 0;

    cin >> x;

    while (x != 0) {
        // bin += to_string(x % 2);
        if (x % 2 == 1)
            count++;

        x = x / 2;
    }

    cout << count << endl;
}
