/*
Author: chankruze (chankruze@geekofia.in)
Created: Mon Aug 17 2020 22:42:28 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>

using namespace std;

int main(int argc, char const *argv[]) {
    string _STR_ORD, food;
    double total = 0.00;

    unordered_map<string, double> menu = {
        {"Pizza", 6.0},
        {"Nachos", 6.0},
        {"Cheeseburger", 10.00},
        {"Water", 4.00},
        {"Coke", 5.00}
    };

    getline(cin, _STR_ORD);

    stringstream ss(_STR_ORD);

    while (getline(ss, food, ' ')) {
        unordered_map<string, double>::const_iterator foodIt = menu.find(food);

        if (foodIt != menu.end()) {
            total += foodIt->second;
        } else {
            total += menu["Coke"];
        }
    }

    cout << total * 1.07 << endl;
}

// INPUT
// Pizza Cheeseburger Water Popcorn
