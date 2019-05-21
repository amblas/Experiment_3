#include <iostream>
#include <iomanip>
#include <cstring>
#include <conio.h>

using namespace std;

	int x;
	float provinceA[7], provinceB[7], provinceC[7];

int main()
{
	cout << "Enter temperature of Province A, B, and C for a week\n";

	for (int x = 0; x < 7; x++)
	{
		cout << "Province A Day " << x + 1 << ": ";  cin >> provinceA[x];
	}
	
	for (int x = 0; x < 7; x++)
	{
		cout << "Province B Day " << x + 1 << ": ";  cin >> provinceB[x];
	}

	for (int x = 0; x < 7; x++)
	{
		cout << "Province C Day " << x + 1 << ": ";  cin >> provinceC[x];
	}

	cout << "\n";

	for (int x = 0; x < 7; x++)
	{
		cout << "Province A Day " << x + 1 << ": " << provinceA[x] << endl;
	}
	
	for (int x = 0; x < 7; x++)
	{
		cout << "Province B Day " << x + 1 << ": " << provinceB[x] << endl;
	}
	
	for (int x = 0; x < 7; x++)
	{
		cout << "Province C Day " << x + 1 << ": " << provinceC[x] << endl;
	}
	_getch();
	return 0;
}