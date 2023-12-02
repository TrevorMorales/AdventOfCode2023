#pragma once
#include <map>
using namespace std;

enum color { Red , Green, Blue };

class CubeConundrum
{
public:
	CubeConundrum();
private:
	string ColorsAsStrings[3] = { "Red" , "Green" , "Blue" };
	bool ValidateGame(map<color, int>);
};

