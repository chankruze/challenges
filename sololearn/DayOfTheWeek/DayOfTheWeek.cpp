/*
Author: chankruze (chankruze@geekofia.in)
Created: Thu Aug 27 2020 21:11:35 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <string.h>

#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

vector<string> split(string str, char *delim) {
    vector<string> splittedArray;
    char temp[str.length() + 1];
    strcpy(temp, str.c_str());

    char *arr = strtok(temp, delim);

    while (arr != NULL) {
        splittedArray.emplace_back(arr);
        arr = strtok(NULL, delim);
    }

    return splittedArray;
}

bool isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return true;
            } else {
                return false;
            }
        } else {
            return true;
        }
    } else {
        return false;
    }
}

string calcDay(int day, int month, int year) {
    const char *dayCodes[] = {
        "Sunday",
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday"};

    const char *monthsArray[] = {"NULL", "jan", "feb", "mar", "apr", "may", "jun", "jul", "aug", "sep", "oct", "nov", "dec"};

    unordered_map<string, int> monthCodes;
    monthCodes["jan"] = 0;
    monthCodes["feb"] = 3;
    monthCodes["mar"] = 3;
    monthCodes["apr"] = 6;
    monthCodes["may"] = 1;
    monthCodes["jun"] = 4;
    monthCodes["jul"] = 6;
    monthCodes["aug"] = 2;
    monthCodes["sep"] = 5;
    monthCodes["oct"] = 0;
    monthCodes["nov"] = 3;
    monthCodes["dec"] = 5;

    unordered_map<string, int> centuryCodes;
    centuryCodes["16"] = 6;
    centuryCodes["17"] = 4;
    centuryCodes["18"] = 2;
    centuryCodes["19"] = 0;
    centuryCodes["20"] = 6;

    // logic
    // day code = ((day + [month code] + [year's last 2 digit] + [year's last 2 digit / 4] + [century code]) % 7 ) - (if Leap Year)
    int monthCode = monthCodes[monthsArray[month]];
    int yearTail = year % 100;
    int yearHead = year / 100;
    int centuryCode = centuryCodes[to_string(yearHead)];

    int dayCode = (day + monthCode + yearTail + (yearTail / 4) + centuryCode) % 7;

    // if leap year -1 in feb calculation
    if (month <= 2 && isLeapYear(year)) {
        dayCode = ((day + monthCode + yearTail + (yearTail / 4) + centuryCode) - 1) % 7;
    }

    return dayCodes[dayCode];
}

int main(int argc, char const *argv[]) {
    string _IN_DATE;
    int day, month, year;
    getline(cin, _IN_DATE);

    // input case 1 (11/19/2019)
    if (_IN_DATE.length() <= 10) {
        vector<string> res = split(_IN_DATE, "/");

        day = stoi(res[1]);
        month = stoi(res[0]);
        year = stoi(res[2]);
    }
    // input case 2 (November 19, 2019)
    else {
        unordered_map<string, int> monthsMap;
        monthsMap["jan"] = 1;
        monthsMap["feb"] = 2;
        monthsMap["mar"] = 3;
        monthsMap["apr"] = 4;
        monthsMap["may"] = 5;
        monthsMap["jun"] = 6;
        monthsMap["jul"] = 7;
        monthsMap["aug"] = 8;
        monthsMap["sep"] = 9;
        monthsMap["oct"] = 10;
        monthsMap["nov"] = 11;
        monthsMap["dec"] = 12;

        vector<string> res = split(_IN_DATE, " ,");

        day = stoi(res[1]);

        string m = res[0].substr(0, 3);
        m[0] = tolower(m[0]);

        month = monthsMap[m];

        year = stoi(res[2]);
    }

    cout << calcDay(day, month, year) << endl;
}
