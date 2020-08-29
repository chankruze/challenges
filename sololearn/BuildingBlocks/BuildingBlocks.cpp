/*
Author: chankruze (chankruze@geekofia.in)
Created: Thu Aug 27 2020 16:35:51 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <iostream>
#include <sstream>

using namespace std;

int main(int argc, char const *argv[]) {
    int b, r, g, y;
    cin >> b >> r >> g >> y;

    int rem = (b % 15) + (r % 15) + (g % 15) + (y % 15);

    cout << rem << endl;
}
