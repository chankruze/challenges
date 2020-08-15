/*
Author: chankruze (chankruze@geekofia.in)
Created: Tue Aug 11 2020 17:55:48 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int pesos, dollar;
    cin >> pesos >> dollar;

    cout << ((pesos / 50) > dollar ? "Dollar" : "Pesos") << endl;
    
    return 0;
}
