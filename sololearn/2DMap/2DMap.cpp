/*
Author: chankruze (chankruze@geekofia.in)
Created: Sun Aug 16 2020 17:40:40 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <iostream>
#include <sstream>
#include <string>

#ifndef _GEEKOFIA_H
#define print(x) std::cout << x
#define println(x) std::cout << x << std::endl
#define input(x) std::cin >> x
#define raw_input(x) getline(std::cin >> std::ws, x)
#endif

// XPXXX,PXXXX,XXXXX,XXXXX,XXXXX -> 2
// XPXXX,XXXXX,XXXXX,XXXPX,XXXXX -> 5

int main(int argc, char const *argv[]) {
    std::string _RAW_IN, row;
    int i = 0, fx = -1, fy = -1, lx, ly;

    input(_RAW_IN);

    std::stringstream ss(_RAW_IN);

    while (std::getline(ss, row, ',')) {
        char c = 'P';
        // first P Y-index
        int y1 = row.find(c);
        // second P Y-index
        int y2 = row.rfind(c);
        // index max bound
        int len = row.length();

        // first P & second P in same row
        if (y1 == y2 && y1 >= 0 & y1 < len) {
            if (fx == -1) {
                fx = i;
                fy = y1;
            } else {
                lx = i;
                ly = y1;
            }

        }  // only one P
        else if ((y1 >= 0 && y1 < len)) {
            if (fx != -1) {
                fx = i;
                fy = y1;
            } else {
                lx = i;
                ly = y1;
            }
        }

        // println("----------- DEBUG -----------------");
        // println(i);
        // println(y1);
        // println(y2);
        // println(fx);
        // println(fy);
        // println("");
        // println(lx);
        // println(ly);

        ++i;
    }

    println(abs(lx - fx) + abs(ly - fy));
}
