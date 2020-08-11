/*
Author: chankruze (chankruze@geekofia.in)
Created: Tue Aug 11 2020 16:38:23 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const* argv[]) {
    string _txt, sound;
    getline(cin, _txt);

    vector<pair<string, string>> soundDb;

    soundDb.emplace_back(pair<string, string>("Lion", "Grr"));
    soundDb.emplace_back(pair<string, string>("Tiger", "Rawr"));
    soundDb.emplace_back(pair<string, string>("Snake", "Ssss"));
    soundDb.emplace_back(pair<string, string>("Bird", "Chirp"));

    stringstream ss(_txt);

    while (getline(ss, sound, ' ')) {
        for (const auto& elem : soundDb) {
            if (sound == elem.second) {
                cout << elem.first << " ";
            }
        }
    }

    cout << "" << endl;

    return 0;
}
