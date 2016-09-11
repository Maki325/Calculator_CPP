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

bool is_number(const string s) {
	std::string::const_iterator it = s.begin();
	while (it != s.end() && std::isdigit(*it)) ++it;
	return !s.empty() && it == s.end();
}

bool checkSigns(char c) {
	if(c == '+' || c == '-' || c == '*' || c == '/') {
		return true;
	}
	return false;
}

int main() 
{

	cout << "MARKO'S CALCULATOR\n\n" << endl;
	cout << "+ is plus, " << endl;
	cout << "- is minus, " << endl;
	cout << "* is times, " << endl;
	cout << "/ is devide and" << endl;
	cout << "c is calculate" << endl;

	char stuffc;
	unsigned long long int i = 0;
	unsigned long long int s = 0;
	unsigned long long int stuffi = 0;
	unsigned long long int numbers[2048];
	char signs[2048];
	bool isRunning = true;
	bool isNumber = true;
	char sign;
	double result = 0;
	while(isRunning) {
		if(isNumber) {
			cin >> stuffi;
		} else {
			cin >> stuffc;
		}
		if(isNumber) {
			if(stuffi > 8446744073709551616) {cout << "This number is grather than suported(8446744073709551616)!!!" << endl; } 
			else { numbers[i] = stuffi; i++; }
			stuffi = 0;
			isNumber = false;
		} else if(sizeof(stuffc) > 1) {
			cout << "What was that sign!!!" << endl;
		} else if(stuffc == 'c') {
			for(int n = 0; n <= i; n++) {
				if(n == 0) { result = numbers[n]; }
				if(n > 0 && signs[n-1] == 'p' || signs[n-1] == '+' ) { result = result + numbers[n]; }
				if(n > 0 && signs[n-1] == 'm' || signs[n-1] == '-' ) { result = result - numbers[n]; }
				if(n > 0 && signs[n-1] == 't' || signs[n-1] == '*' ) { result = result * numbers[n]; }
				if(n > 0 && signs[n-1] == 'd' || signs[n-1] == '/' ) { result = result / numbers[n]; }
			}
			cout << "Result is:	" << result << endl;
			isRunning = false;
		} else if(stuffc == stuffc) {
			if(checkSigns(stuffc)) {
				signs[s] = stuffc;
				s++;
			}
			isNumber = true;
		}
	}

	return 0;
}

