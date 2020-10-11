#pragma once
#include <fstream>

class BigNumber
{
	long long number[23];
public:
	void init();
	bool read();
	bool fread(std::ifstream& in);
	void print();
	void fprint(std::ofstream& out);
	BigNumber add(BigNumber value);
	BigNumber sub(BigNumber value);
	BigNumber mul(BigNumber value);
	BigNumber div(BigNumber value);
	
};

