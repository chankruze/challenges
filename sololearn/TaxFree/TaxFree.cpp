/*
Author: chankruze (chankruze@geekofia.in)
Created: Thu Aug 27 2020 19:53:09 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
    string _IN, _PRICE;
    getline(cin, _IN);
    double total = 0;

    stringstream buf(_IN);

    while (getline(buf, _PRICE, ',')) {
        double price = stod(_PRICE);
        if (price < 20.0) {
            price += (price * 0.07);
        }
        total += price;
    }

    cout << total << endl;
}
