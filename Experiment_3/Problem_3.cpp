#include <iostream>
#include <iomanip>
#include <cstring>
#include <conio.h>

using namespace std;

int main()
{
	int size, x, numberIn[500], numberOut[500];
	char letterIn[500], letterOut[500];

	cout << "Enter size: "; cin >> size;
	cout << "\n";
	cout << "Enter elements : ";


	for (x = 0; x < size; x++)
	{
		cin >> numberIn[x];
	}

	for (x = 0; x < size; x++)
	{
		cin >> letterIn[x];
	}

	cout << "Reversing values....\n\n";

	for (x = 0; x < size; x++)
	{
		numberOut[x] = numberIn[size - x- 1];
	}

	for (x = 0; x < size; x++)
	{
		letterOut[x] = letterIn[size - x- 1];
	}

	for (x = 0; x < size; x++)
	{
		cout << numberOut[x] << " ";
		cout << letterOut[x] << " ";
	}

	_getch();
	return 0;
}