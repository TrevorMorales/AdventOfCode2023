#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const string NumbersAsStrings[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int ParseLine(string &ToParse)
{
	unsigned int Nums[2] = {NULL, NULL};

	for (char &c : ToParse) {
		if (c >= 'A' and c <= 'Z')
		{
			c += 32;
		}
	}
	for (int i = 0; i <= ToParse.length(); i++)
	{
		if (ToParse[i] >= '0' and ToParse[i] <= '9')
		{
			(Nums[0] == NULL ? Nums[0] = ToParse[i] - 48 : Nums[1] = ToParse[i] - 48);
		}
		for (int j = 0; j < 10; j++)
		{
			if (ToParse.substr(i, NumbersAsStrings[j].length()) == NumbersAsStrings[j])
			{
				(Nums[0] == NULL ? Nums[0] = j : Nums[1] = j);
			}
		}
	}
	return (Nums[0] * 10) + (Nums[1] == NULL ? Nums[0] : Nums[1]);
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