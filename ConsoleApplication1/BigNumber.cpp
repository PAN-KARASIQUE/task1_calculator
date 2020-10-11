#include <iostream>
#include <fstream>
#include <string>
#include "BigNumber.h"

using namespace std;

bool isNumber(char c) {
	if (c >= '0' && c <= '9')
		return 1;
	return 0;
}

void BigNumber::init() {
	for (int i = 0; i < 23; i++) {
		number[i] = 0;
	}
}

bool BigNumber::read()
{
	string s;
	char c;
	init();
	while ((c = cin.get()) != ' ' && c != '\n' && !cin.eof() || s == "") {
		if (isNumber(c)) {
			s += c;
		}
		else 
			if (c != ' ' && c != '\n')
				return 0;
	}
	int i = 0;
	if (s == "")
		return 0;
	while (s.length() >= 9) {
		number[i] = stoll(s.substr(s.length() - 9, 9), 0, 10);
		s = s.substr(0, s.length() - 9);
		i++;
	}
	if (s.length() != 0) {
		number[i] = stoll(s);
	}
	return 1;
}

bool BigNumber::fread(ifstream& in)
{
	string s;
	char c;
	init();
	while ((c = in.get()) != ' ' && c != '\n' && !in.eof() || s == "") {
		if (isNumber(c)) {
			s += c;
		}
		else
			if (c != ' ' && c != '\n')
				return 0;
	}
	int i = 0;
	if (s == "")
		return 0;
	while (s.length() >= 9) {
		number[i] = stoll(s.substr(s.length() - 9, 9), 0, 10);
		s = s.substr(0, s.length() - 9);
		i++;
	}
	if (s.length() != 0) {
		number[i] = stoll(s);
	}
	return 1;
}

void BigNumber::print()
{
	bool flag = true;
	for (int i = 22; i >= 0; i--) {
		if (number[i] != 0 || !flag) {
			if (flag) 
				cout << number[i];
			else {
				long long temp = number[i];
				int count = 0;
				do {
					count++;
					temp /= 10;
				} while (temp > 0);
				for (int j = 0; j < 9 - count; j++)
					cout << 0;
				cout << number[i];
			}
			flag = false;
		}
	}
}

void BigNumber::fprint(ofstream& out)
{
	bool flag = true;
	for (int i = 22; i >= 0; i--) {
		if (number[i] != 0 || !flag) {
			if (flag)
				out << number[i];
			else {
				long long temp = number[i];
				int count = 0;
				do {
					count++;
					temp /= 10;
				} while (temp > 0);
				for (int j = 0; j < 9 - count; j++)
					out << 0;
				out << number[i];
			}
			flag = false;
		}
	}
}

BigNumber BigNumber::add(BigNumber value)
{
	return BigNumber();
}

BigNumber BigNumber::sub(BigNumber value)
{
	return BigNumber();
}

BigNumber BigNumber::mul(BigNumber value)
{
	return BigNumber();
}

BigNumber BigNumber::div(BigNumber value)
{
	return BigNumber();
}
