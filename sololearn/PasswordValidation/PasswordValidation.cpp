/*
Author: chankruze (chankruze@geekofia.in)
Created: Mon Aug 10 2020 18:56:48 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <iostream>

using namespace std;

int countSpecialChar(string* str, string* comp) {
    int count = 0;
    for (int i = 0; i < str->length(); ++i) {
        if (comp->find((*str)[i]) < comp->length()) {
            count++;
        }
    }
    return count;
}

int main(int argc, char const* argv[]) {
    string pass;
    cin >> pass;

    if (pass.length() >= 7) {
        string specialChars = "!@#$%&*";
        string numChars = "0123456789";

        if (countSpecialChar(&pass, &specialChars) > 1 &&
            countSpecialChar(&pass, &numChars) > 1) {
            cout << "Strong" << endl;
        } else {
            cout << "Weak" << endl;
        }
    } else {
        cout << "Weak" << endl;
    }

    return 0;
}
