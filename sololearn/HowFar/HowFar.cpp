/*
Author: chankruze (chankruze@geekofia.in)
Created: Thu Aug 27 2020 20:13:18 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[]) {
    string map;
    getline(cin, map);

    int index_h = map.find('H');
    int index_p = map.find('P');
    unsigned dist;

    cout << map << endl;

    if (index_h < map.length() && index_p < map.length()) {
        dist = abs(index_p - index_h) - 1;
    }

    cout << dist << endl;
}
