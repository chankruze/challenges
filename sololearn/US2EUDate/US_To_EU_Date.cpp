/*
Author: chankruze (chankruze@geekofia.in)
Created: Sun Aug 09 2020 18:37:43 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond

*/

#include <bits/stdc++.h>

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
    int date, month, year;
    string part;

    // US date (input)
    string usDate;
    getline(cin >> ws, usDate);

    stringstream ss(usDate);

    if (usDate.length() <= 10) {
        vector<int> iParts;

        while (getline(ss >> ws, part, '/')) {
            iParts.emplace_back(stoi(part));
        }

        date = iParts[1];
        month = iParts[0];
        year = iParts[2];
    } else {
        vector<string> sParts;

        while (getline(ss >> ws, part, ' ')) {
            sParts.emplace_back(part);
        }

        // date
        date = stoi(sParts[1].substr(0, sParts[1].find(',')));

        // month
        vector<string> months = {"NULL", "January", "Febuary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
        month = distance(months.begin(),
                         find(months.begin(), months.end(), sParts[0]));

        // year
        year = stoi(sParts[2]);
    }

    cout << date << "/" << month << "/" << year << endl;
    return 0;
}
