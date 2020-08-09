/*
Author: chankruze (chankruze@geekofia.in)
Created: Sun Aug 09 2020 19:31:08 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond

*/

#include <iostream>
#include <cstdlib>

using namespace std;

void update(int *a, int *b){
    int temp = *a;
    *a = *a + *b;
    *b = abs(temp - *b);
}

int main(){
    int a, b;

    cin >> a >> b;
    update(&a, &b);

    cout << "a = " << a << "\nb = " << b << endl;
    return 0;
}