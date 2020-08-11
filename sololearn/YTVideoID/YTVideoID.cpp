/*
Author: chankruze (chankruze@geekofia.in)
Created: Tue Aug 11 2020 05:26:41 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
    string link;
    cin >> link;

    cout << link.substr(link.length() - 11) << endl;
    return 0;
}
