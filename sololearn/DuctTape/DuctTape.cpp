/*
Author: chankruze (chankruze@geekofia.in)
Created: Tue Aug 18 2020 10:10:34 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[]) {
    int height, width;
    cin >> height >> width;

    int doorArea = 2 * (height * width);
    double ductArea = (1.00 / 6.00) * 60.00;

    int rolls = ceil(doorArea / ductArea);
    cout << rolls << endl;
    cin.get();
}
