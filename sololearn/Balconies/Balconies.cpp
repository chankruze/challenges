/*
Author: chankruze (chankruze@geekofia.in)
Created: Tue Aug 18 2020 07:20:27 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
    string _APART_A, _APART_B;

    cin >> _APART_A >> _APART_B;
    
    int _AREA_A, _AREA_B, _COMMA_A, _COMMA_B;
    _COMMA_A = _APART_A.find(',');
    _COMMA_B = _APART_B.find(',');

    _AREA_A = stoi(_APART_A.substr(_COMMA_A - 1)) * stoi(_APART_A.substr(_COMMA_A + 1, _APART_A.length() - _COMMA_A));
    _AREA_B = stoi(_APART_A.substr(_COMMA_B - 1)) * stoi(_APART_B.substr(_COMMA_B + 1, _APART_B.length() - _COMMA_B));

    cout << (_AREA_A > _AREA_B  ? "Apartment A" : "Apartment B") << endl;
}
