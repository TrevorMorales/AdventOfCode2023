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
	unsigned int OutputSum = 0, GameNum = 0;
	
	ifstream ifs;
	ifs.open("Inputs/CubeConundrumInput.txt");
	
	map<color, int> FileInputs;
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

			}
			if (true)
			{
				OutputSum += GameNum;
			}
		}
	}
}