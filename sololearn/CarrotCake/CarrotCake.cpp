/*
Author: chankruze (chankruze@geekofia.in)
Created: Wed Aug 26 2020 21:01:57 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int carrots, boxes;
    cin >> carrots >> boxes;
    int rem = carrots % boxes;

    if (rem >= 7) {
        cout << "Cake Time" << endl;
        return 0;
    }

    cout << "I need to buy " << (7 - rem) << " more" << endl;
}
