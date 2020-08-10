/*
Author: chankruze (chankruze@geekofia.in)
Created: Tue Aug 11 2020 00:13:21 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <iostream>
#include <string>

using namespace std;

bool isGuard(char c) {
    if (c == 'G') {
        return true;
    } else {
        return false;
    }
}

int main(int argc, char const *argv[]) {
    string floorDiagram;
    int indexThief, indexMoney;

    getline(cin >> ws, floorDiagram);

    indexThief = floorDiagram.find('T');
    indexMoney = floorDiagram.find('$');

    for (int i = 0; i < floorDiagram.length(); i++) {
        if (isGuard(floorDiagram[i])) {
            int high, low;
            high = (indexThief > indexMoney ? indexThief : indexMoney);
            low = (indexThief > indexMoney ? indexMoney : indexThief);

            if (i < high && i > low) {
                cout << "quiet" << endl;
                return 0;
            }
        }
    }

    cout << "ALARM" << endl;

    return 0;
}
