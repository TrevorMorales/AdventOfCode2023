#pragma once
#include <map>
#include <vector>
using namespace std;

enum color { Red , Green, Blue };

class CubeConundrum
{
public:
	CubeConundrum();
private:
	string ColorsAsStrings[3] = { "Red" , "Green" , "Blue" };
	bool ValidateGame(vector<map<color, int>>);
};

