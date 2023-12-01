#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const string NumbersAsStrings[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int ParseLine(string &ToParse)
{
	int Nums[2] = {NULL, NULL};
	bool FirstFound = false;
	int First = NULL, Last = NULL;
	char CheckChar;

	for (char &c : ToParse)
	{
		if (c >= 'A' and c <= 'Z')
		{
			c += 32;
		}
	}
	for (int i = 0; i <= ToParse.length(); i++)
	{
		CheckChar = ToParse[i];
		if (CheckChar >= 48 and CheckChar <= 57)
		{
			Nums[FirstFound] = CheckChar - 48;
			FirstFound = (FirstFound ? FirstFound : true);
		}
		for (int j = 0; j < 10; j++)
		{
			string temp = ToParse;
			if (temp.substr(i, NumbersAsStrings[j].length()) == NumbersAsStrings[j])
			{
				Nums[FirstFound] = j;
				FirstFound = (FirstFound ? FirstFound : true);
			}
		}
	}
	if(Nums[size(Nums)-1] == NULL)
	{
		return (Nums[0] * 10) + Nums[0];
	}
	return (Nums[0] * 10) + Nums[1];
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