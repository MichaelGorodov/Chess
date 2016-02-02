#include <string>

using namespace std;

class Figure
{
protected:
	int x;
	int y;
	string name;
	bool isAlive;
	bool color;

public:
	void move();
	Figure();	
};

