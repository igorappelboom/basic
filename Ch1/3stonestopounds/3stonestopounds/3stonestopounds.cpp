

#include "pch.h"
#include <iostream>
using namespace	std;

int stonetolb(int); //function prototype
int main()
{
	int stone;
	cout << "Enter the weight in stone: ";
	cin >> stone;
	int pounds = stonetolb(stone);
	cout << stone << " stone = ";
	cout << pounds << " pounds." << endl;
	return 0;
 
}

int stonetolb(int stones)
{
	return 14 * stones;
}

