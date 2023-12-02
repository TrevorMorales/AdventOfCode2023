#pragma once
using namespace std;

class Trebuchet
{
public:
	Trebuchet();
private:
	const string NumbersAsStrings[10] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	int ParseLine(string&);
};