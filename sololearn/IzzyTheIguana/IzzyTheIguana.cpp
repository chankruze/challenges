/*
Author: chankruze (chankruze@geekofia.in)
Created: Tue Aug 18 2020 11:03:17 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>

using namespace std;

int main(int argc, char const *argv[]) {
    string _IN, snack;
    getline(cin, _IN);

    unordered_map<string, int> snacks;

    snacks["Lettuce"] = 5;
    snacks["Carrot"] = 4;
    snacks["Mango"] = 9;
    snacks["Cheeseburger"] = 0;

    stringstream ss(_IN);

    int total = 0;
    while (getline(ss, snack, ' ')) {
        total += snacks[snack];

        if (total >= 10) {
            cout << "Come on Down!" << endl;
            return 0;
        }
    }

    cout << "Time to wait" << endl;
}
