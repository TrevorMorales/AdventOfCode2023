#pragma once
#include <map>
using namespace std;

enum color { Red, Green, Blue };

class CubeConundrum
{
public:
	CubeConundrum();
private:
	bool ValidateGame(map<color, int>);
};

