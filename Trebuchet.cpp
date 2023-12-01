#include <iostream>

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
	if (First != ' ' && Last != ' ')
	{
		return ((First * 10) + Last);
	}
	return -1;
}

int main()
{
	string FirstTest = "1abc2";
	cout << ParseLine(FirstTest);
	return 0;
}