#include <iostream>
#include <fstream>
#include <string>
#include "CubeConundrum.h"

using namespace std;

bool CubeConundrum::ValidateGame(vector<map<color, int>> GameInput)
{
	return true;
}

CubeConundrum::CubeConundrum()
{
	unsigned int OutputSum = 0, GameNum = 0, DiceNum = 0;
	int CurrentRound = 1;
	
	ifstream ifs;
	ifs.open("Inputs/CubeConundrumInput.txt");
	
	vector<map<color, int>> GameInputs;
	string line;
	if (ifs.is_open()) {
		while (getline(ifs, line)) {
			if (line.substr(0, 4) == "Game")
			{
				GameNum = 0;
				for (int i = 5; line[i] >= 48 and line[i] <= 57 ; i++)
				{
					GameNum = GameNum * 10;
					GameNum += (line[i] - 48);
				}
			}
			for (int i = 0; i < line.size(); i++)
			{
				for(int n = i; line[n] >= 48 and line[n] <= 57; n++)
				{
					DiceNum = DiceNum * 10;
					DiceNum += (line[i] - 48);
				}
				for (int j = 0; j < 3; j++)
				{
					if (line.substr(i, ColorsAsStrings[j].length()) == ColorsAsStrings[j])
					{
						cout << line.substr(i, ColorsAsStrings[j].length()) << " : " << DiceNum << endl;
					}
				}
				DiceNum = 0;
			}
			if (true)
			{
				OutputSum += GameNum;
			}
		}
	}
}