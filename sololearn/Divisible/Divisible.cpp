/*
Author: chankruze (chankruze@geekofia.in)
Created: Thu Aug 27 2020 17:47:40 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <iostream>
#include <sstream>

using namespace std;

int main(int argc, char const *argv[]) {
    int num;
    string _IN, _DIVISOR;

    cin >> num;
    getline(cin >> ws, _IN);

    stringstream divisors(_IN);

    while (getline(divisors, _DIVISOR, ' ')) {
        if (num % stoi(_DIVISOR) != 0) {
            cout << "not divisible by all" << endl;
            return 0;
        }
    }

    cout << "divisible by all" << endl;
}
