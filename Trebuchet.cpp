#include <iostream>
#include <fstream>
#include <string>
#include <array>

using namespace std;

int ParseLine(string ToParse)
{
	bool FirstFound = false;
	int First = ' ', Last = ' ';
	for (int i = 0; i < ToParse.length(); i++)
	{
		if (ToParse[i] >= 48 && ToParse[i] <= 57)
		{
			if (!FirstFound)
			{
				First = ToParse[i] - 48;
				FirstFound = true;
			}
			else
			{
				Last = ToParse[i] - 48;
			}
		}
	}
	if (First != ' ')
	{
		if (Last != ' ')
		{
			return ((First * 10) + Last);
		}
		return ((First * 10) + First);
	}
	return -1;
}

string TestExamples[4] = {"1abc2", "pqr3stu8vwx", "a1b2c3d4e5f", "treb7uchet"};

int main()
{
	ifstream fs;
	fs.open("Inputs/TrebuchetInput.txt");

	string line;
	if (fs.is_open()) {
		while (getline(fs, line)) {
			cout << ParseLine(line) << endl;
		}
	}
	fs.close();
	return 0;
}