/*
Author: chankruze (chankruze@geekofia.in)
Created: Sat Aug 15 2020 16:58:01 GMT+0530 (India Standard Time)

Copyright (c) Geekofia 2020 and beyond
*/

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#ifndef _GEEKOFIA_H
#define print(x) std::cout << x
#define println(x) std::cout << x << endl
#define input(x) std::cin >> x
#define raw_input(x) getline(std::cin >> std::ws, x)
#endif

using namespace std;

static string operationChars = "/*+-";
string numberChars = "0123456789";

int calcRes(string expr) {
    // store all nums serially
    vector<int> nums;
    // store all signs serialaly
    vector<char> signs;
    // hold number digits
    string number = "";
    // current total
    int crrRes = 0;
    // previous pair total
    int prevRes = 0;

    // max iteration
    int len = expr.length();

    for (int i = 0; i < len; i++) {
        // current character
        char c = expr[i];

        // check for math signs
        if (operationChars.find(c) < operationChars.length()) {
            // push sign
            signs.emplace_back(c);
            // push num before sign
            // convert string to int
            nums.emplace_back(stoi(number));
            // reset num
            number = "";
        }
        else if (numberChars.find(c) < numberChars.length()) {
            // append digit to number
            number += c;
        }
    }
    // push last num
    nums.emplace_back(stoi(number));

    unsigned int numsLen = nums.size(), i = 0;

    for (char sign : signs) {
        if (i < numsLen && i + 1 < numsLen) {
            // initialize prevRes for first pair
            if (i == 0) {
                // check operator
                switch (sign) {
                case '/':
                    crrRes = nums[i] / nums[i++];
                    prevRes = crrRes;
                    break;

                case '*':
                    crrRes = nums[i] * nums[i++];
                    prevRes = crrRes;
                    break;

                case '+':
                    crrRes = nums[i] + nums[i++];
                    prevRes = crrRes;
                    break;

                case '-':
                    crrRes = nums[i] - nums[i++];
                    prevRes = crrRes;
                    break;

                default:
                    break;
                }
            }
            else {
                // check operator
                switch (sign) {
                case '/':
                    crrRes = prevRes / nums[i++];
                    prevRes = crrRes;
                    break;

                case '*':
                    crrRes = prevRes * nums[i++];
                    prevRes = crrRes;
                    break;

                case '+':
                    crrRes = prevRes + nums[i++];
                    prevRes = crrRes;
                    break;

                case '-':
                    crrRes = prevRes - nums[i++];
                    prevRes = crrRes;
                    break;

                default:
                    break;
                }
            }
        }
    }

    println(crrRes);
    // return total
    return crrRes;
}

bool evalExpression(string& expr, int res) {
    string expression = "";

    for (int i = 0; i < expr.length(); i++) {
        // current character
        char c = expr[i];

        // start para
        if (c == '(') {
            // reset num
            expression = "";
        }  // end para
        else if (c == ')') {
            // check res
            if (res == calcRes(expression)) {
                // return first match no need to calc further
                return true;
            }
        }
        else {
            // push digit to expression
            // why if/else ? to ignoree space
            if (numberChars.find(c)) {
                expression += c;
            }
            else if (operationChars.find(c)) {
                expression += c;
            }
        }
    }

    // no match
    return false;
}

int main(int argc, char const* argv[]) {
    int res;
    string _RAW_IN, word;

    // the expected result to match
    input(res);

    // store the whole input (2nd) shit
    raw_input(_RAW_IN);

    // convert string to input stream
    stringstream ss(_RAW_IN);

    // keep track of expression pair
    int index = 0;

    // iterate input stream
    while (getline(ss, word, ' ')) {
        // check if expression matches result
        if (evalExpression(word, res)) {
            print("index ");
            println(index);
            return 0;
        }
        ++index;
    }

    println("none");
}
