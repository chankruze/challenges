/*
Author: chankruze (chankruze@geekofia.in)
Created: Mon Aug 10 2020 18:51:25 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int n, sum = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        if (num % 2 == 0) {
            sum += num;
        }
    }

    cout << sum << endl;

    return 0;
}
