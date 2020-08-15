/*
Author: chankruze (chankruze@geekofia.in)
Created: Tue Aug 11 2020 14:53:39 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <cmath>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int paintNo;
    float totalCost = 40.0, tax = 0.0;
    cin >> paintNo;

    if (paintNo > 0) {
        totalCost += paintNo * 5.0;
    }

    totalCost += totalCost * 0.1;

    int total = ceil(totalCost);

    cout << total << endl;

    return 0;
}
