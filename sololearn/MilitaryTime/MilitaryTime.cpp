/*
Author: chankruze (chankruze@geekofia.in)
Created: Fri Aug 07 2020 17:43:03 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond

*/

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
    string time;
    cout << "Enter time (12 hour format i.e. 11:15 PM): ";
    getline(cin, time);

    // split to HR MIN SUFFIX
    int delim = time.find(":");
    int hrs = stoi(time.substr(0, delim));
    int min = stoi(time.substr(delim + 1));
    string suffix = time.substr(time.find(" ") + 1);

    // if PM
    if (suffix == "PM") {
        // if hr != 12 --> +12
        if (hrs != 12)
            hrs += 12;
    } else {
        // if hr == 12 -> 00
        if (hrs == 12)
            hrs = 00;
    }

    cout << hrs << ":" << min << endl;
    return 0;
}
