/*
Author: chankruze (chankruze@geekofia.in)
Created: Mon Aug 17 2020 21:58:25 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <iostream>
#include <vector>

using namespace std;

int Q(int num) {
    vector<int> arr;
    arr.emplace_back(1);
    arr.emplace_back(1);

    for (int i = 2; i < num; i++) {
        arr.emplace_back(arr[i - arr[i - 1]] + arr[i - arr[i - 2]]);
    }

    return arr[num - 1];
}

int main(int argc, char const *argv[]) {
    int n;
    cin >> n;

    cout << Q(n) << endl;
}
