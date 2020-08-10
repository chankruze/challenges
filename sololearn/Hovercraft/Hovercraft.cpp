/*
Author: chankruze (chankruze@geekofia.in)
Created: Mon Aug 10 2020 17:46:03 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int items, prodCost = 21000000, sellingPrice;
    cin >> items;

    sellingPrice = items * 3000000;

    if (sellingPrice > prodCost) {
        cout << "Profit" << endl;
    } else if (sellingPrice < prodCost) {
        cout << "Loss" << endl;
    } else {
        cout << "Broke Even" << endl;
    }

    return 0;
}
