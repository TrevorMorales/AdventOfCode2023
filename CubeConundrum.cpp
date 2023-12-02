#include <iostream>
#include <fstream>
#include <string>
#include "CubeConundrum.h"

using namespace std;

bool CubeConundrum::ValidateGame(map<color, int> GameInput)
{
	return true;
}

CubeConundrum::CubeConundrum()
{
	int OutputSum = 0, GameNum = 0;
	ifstream ifs;
	ifs.open("Inputs/CubeConundrumInput.txt");
	map<color, int> FileInput;
	string line;
	if (ifs.is_open()) {
		while (getline(ifs, line)) {
			if (line.substr(0, 5) == "Game ")
			{
				GameNum = 0;
				for (int i = 5; line[i] < 48 || line[i] > 57; i++)
				{
					GameNum += (line[i] - 48) * 10 ^ (i - 6);
				}
			}
			for (int i = 0; i < line.size(); i++)
			{
				for (int j = 0; j < 3; j++)
				{
					if (line.substr(i, ColorsAsStrings[j].length()) == ColorsAsStrings[j])
					{
						line[i + ColorsAsStrings[j].length()]
					}
				}
			}
			if (true)
			{
				OutputSum += GameNum;
			}
		}
	}
}