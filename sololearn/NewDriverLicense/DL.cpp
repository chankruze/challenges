/*
Author: chankruze (chankruze@geekofia.in)
Created: Sun Aug 09 2020 16:27:21 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond

*/

#include <bits/stdc++.h>

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// print(time)
bool compareWords(string a, string b) {
    return a.compare(b) < 0;
}

int main(int argc, char const *argv[]) {
    // variables
    string name, customers, driver;
    int agents, index;
    vector<string> drivers;
    vector<string>::iterator it;

    // inputs
    cin >> name >> agents;
    // cin.ignore();
    getline(cin >> ws, customers);

    // storing inputs
    drivers.emplace_back(name);
    stringstream ss(customers);

    while (getline(ss >> ws, driver, ' ')) {
        drivers.emplace_back(driver);
    }

    // sort names alphabetically
    sort(drivers.begin(), drivers.end(), compareWords);

    it = find(drivers.begin(), drivers.end(), name);
    
    if (it != drivers.cend()) {
        index = distance(drivers.begin(), it) + 1;
    }

    if (agents > index) {
        agents = index;
    }

    int rem = index % agents;
    int div = index / agents;


    cout << (rem + div) * 20 << endl;

    return 0;
}
