//============================================================================
// Name        : Calculator.cpp
// Author      : Marko325
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;


bool add(string s) {
    if(s == "+") {
        return true;
    }
    return false;
}

bool is_number(const string s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

int main()
{

    cout << "MARKO'S CALCULATOR\n\n" << endl;
    cout << "+ is plus,\n";
    cout << "- is minus,\n";
    cout << "* is times,\n";,
    cout << "/ is divide and\n";
    cout << "c is calculation!\n" << endl;
    //cin >> i;
    char stuffc;
    unsigned long long int i = 0;
    unsigned long long int i1 = 0;
    unsigned long long int stuffi;
    unsigned long long int numbers[2048];
    char signs[2048];
    bool isRunning = true;
    bool isNummber = true;
    double result = 0;
    while(isRunning) {
        if(isNummber) {
            cin >> stuffi;
        } else {
            cin >> stuffc;
        }
        if(isNummber) {
            //numbers += stuffs + ",";
            //unsigned long long int i; = stoll(stuff);
            if(stuffi > 18446744073709551615) {cout << "This number is grater than suported(18446744073709551615)!!! " << endl; } else { numbers[i] = stuffi; i++; }
            stuffi = 0;
            isNummber = false;
        } else if(sizeof(stuffc) > 1) {
            cout << "What was that sign!!!" << endl;
        } else if(stuffc == 'c') {
            for(int n = 0;n <= i; n++) {
            	 cout << "Result is: " << numbers[n] << endl;
            }
            isRunning = false;
            /*cout << "String stuff is equal to " << stuff <<
            " And it has " << sizeof(stuff) << " bytes" << endl;*/
        } else if(stuffc == stuffc) {
            isNummber = true;
        }
    }

    return 0;
}

