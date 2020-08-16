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
// XPXXP,XXXXX,XXXXX,XXXXX,XXXXX -> 3
// XPXPX,XXXXX,XXXXX,XXXXX,XXXXX -> 2
// PPXXX,XXXXX,XXXXX,XXXXX,XXXXX -> 1

int main(int argc, char const *argv[]) {
    std::string _RAW_IN, row;
    int i = 0, fx = -1, fy = -1, lx = -1, ly = -1;

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
        // if they are in same row, y1 != y2 (find != rfind)
        if (y1 != y2) {
            // x index
            // fx = i;
            // lx = fx;

            // y index

            println(abs(y1 - y2));
            return 0;
        }  // only one P (y1 == y2)
        else if (y1 == y2 && y1 > -1 && y1 < len) {
            // first P
            if (fx == -1 && lx == -1) {
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
        // println("");
        // println(fx);
        // println(fy);
        // println("");
        // println(lx);
        // println(ly);

        ++i;
    }

    println(abs(lx - fx) + abs(ly - fy));
}
