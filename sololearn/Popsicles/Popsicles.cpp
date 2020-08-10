/*
Author: chankruze (chankruze@geekofia.in)
Created: Mon Aug 10 2020 17:55:51 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int guys, popsicles;
    cin >> guys >> popsicles;

    if (popsicles % guys == 0) {
        cout << "give away" << endl;
    } else {
        cout << "eat them yourself" << endl;
    }

    return 0;
}
