/*
Author: chankruze (chankruze@geekofia.in)
Created: Tue Aug 18 2020 11:24:38 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int pieces;
    double price;
    cin >> pieces;

    price = pieces * 5.00;

    if (pieces > 1) {
        price -= (price * 10) / 100.00;
    }

    price += (price * 7) / 100.00;

    cout << price << endl;
}
