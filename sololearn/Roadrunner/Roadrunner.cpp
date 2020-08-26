/*
Author: chankruze (chankruze@geekofia.in)
Created: Wed Aug 26 2020 04:15:24 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int dist, v_r, v_c;
    cin >> dist;
    cin >> v_r;
    cin >> v_c;

    if ((double)(50.00 / v_c) > (double)(dist / v_r)) {
        cout << "Meep Meep" << endl;
    } else {
        cout << "Yum" << endl;
    }
}
