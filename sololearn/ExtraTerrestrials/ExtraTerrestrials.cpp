/*
Author: chankruze (chankruze@geekofia.in)
Created: Mon Aug 10 2020 22:32:38 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <bits/stdc++.h>

#include <iostream>
#include <string>

using namespace std;

// void reverseStr(string& str) {
//     int n = str.length();

//     // Swap character starting from two corners
//     for (int i = 0; i < n / 2; i++)
//         swap(str[i], str[n - i - 1]);
// }

int main(int argc, char const* argv[]) {
    string txt;
    cin >> txt;
    reverse(txt.begin(), txt.end());
    cout << txt << endl;
    return 0;
}
