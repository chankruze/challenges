/*
Author: chankruze (chankruze@geekofia.in)
Created: Wed Aug 26 2020 03:33:47 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int x, sum = 0;
    cin >> x;

    for (int i = 1; i < x; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    cout << sum << endl;
}
