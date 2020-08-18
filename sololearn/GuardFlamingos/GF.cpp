/*
Author: chankruze (chankruze@geekofia.in)
Created: Tue Aug 18 2020 10:42:38 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int length, width;

    cin >> length >> width;

    int perimeter = 2 * (length + width);

    cout << perimeter / 2 << endl;
}
