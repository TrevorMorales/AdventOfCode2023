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
	return 0;
}

int main()
{
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
}