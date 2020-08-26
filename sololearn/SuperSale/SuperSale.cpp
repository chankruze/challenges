/*
Author: chankruze (chankruze@geekofia.in)
Created: Wed Aug 26 2020 19:07:34 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[]) {
    string _STR_IN, _STR_PRICE;
    double _MOST_COSTLY, total;
    vector<double> cart;

    cin >> _STR_IN;
    stringstream buf(_STR_IN);

    while (getline(buf, _STR_PRICE, ',')) {
        cart.emplace_back(stod(_STR_PRICE));
    }

    _MOST_COSTLY = cart[0];

    for (double price : cart) {
        total += price;

        if (price > _MOST_COSTLY)
            _MOST_COSTLY = price;
    }

    double temp = total - _MOST_COSTLY;

    // new total 
    double totalNew = _MOST_COSTLY + temp - (temp * 0.3);

    // total with tax
    total += total * 0.07;
    totalNew += totalNew * 0.07;

    // saving
    cout << floor(total - totalNew) << endl;
}
