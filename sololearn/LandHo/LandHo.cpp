/*
Author: chankruze (chankruze@geekofia.in)
Created: Tue Aug 18 2020 12:23:05 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int queue, time = 10;
    cin >> queue;

    int trip = queue / 20;

    if (trip > 0) {
        time += 20 * trip;
    } else {
        time += 10 * trip;
    }

    cout << time << endl;
}
