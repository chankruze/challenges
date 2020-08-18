/*
Author: chankruze (chankruze@geekofia.in)
Created: Tue Aug 18 2020 10:37:38 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int total, mine, others;

    cin >> total >> mine >> others;

    if (total > (mine + others)) {
        cout << "Keep Hunting" << endl;
    } else {
        cout << "Candy Time" << endl;
    }
}
