#include "Chessboard.h"
#include <iostream>
#include <iomanip>

using namespace std;
void Chessboard::showBoard()
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			cout << setw(2) << ".";
		}
		cout << endl;

	}
}

