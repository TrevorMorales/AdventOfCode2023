#include <iostream>
#include <fstream>
#include <string>
#include <array>

using namespace std;

const string NumbersAsStrings[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int ParseLine(string &ToParse)
{
	bool FirstFound = false;
	int First = NULL, Last = NULL;

	char CheckChar;

	for (int i = 0; i < ToParse.length(); i++)
	{
		CheckChar = ToParse[i];
		if (CheckChar >= 65 && CheckChar <= 90)
		{
			ToParse[i] += 32;
		}
	}
	for (int i = 0; i < ToParse.length(); i++)
	{
		CheckChar = ToParse[i];
		if (CheckChar >= 48 && CheckChar <= 57)
		{
			if (!FirstFound)
			{
				First = CheckChar - 48;
				FirstFound = true;
			}
			else
			{
				Last = CheckChar - 48;
			}
		}
		for (int j =0; j < NumbersAsStrings->length(); j++)
		{
			if (ToParse.substr(i, NumbersAsStrings[j].length()) == NumbersAsStrings[j])
			{
				if (!FirstFound)
				{
					First = j;
					FirstFound = true;
				}
				else
				{
					Last = j;
				}
			}
		}
	}
	if (First != NULL)
	{
		if (Last != NULL)
		{
			return ((First * 10) + Last);
		}
		return ((First * 10) + First);
	}
	return 0;
}

int main()
{
	/*
	int OutputSum = 0;
	ifstream ifs;
	ifs.open("Inputs/TrebuchetInput.txt");
	string line;
	if (ifs.is_open()) {
		while (getline(ifs, line)) {
			OutputSum += ParseLine(line);
		}
	}
	cout << OutputSum;
	ifs.close();
	return 0;
	*/

	string test = "ONETWO";
	cout << ParseLine(test) << endl;
	cout << test;
	return 0;
}