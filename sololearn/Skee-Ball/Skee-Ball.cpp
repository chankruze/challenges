/*
Author: chankruze (chankruze@geekofia.in)
Created: Tue Aug 11 2020 05:55:15 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
    int score, price;
    cin >> score >> price;

    cout << ((score / 12) >= price ? "Buy it!" : "Try again") << endl;
    return 0;
}
