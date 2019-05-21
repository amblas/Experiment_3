#include <iostream>
#include <iomanip>
#include <cstring>
#include <conio.h>

using namespace std;

int main ()
{
	int x, n;
	float sum = 0, average;
	float arr[10];

	cout << "Enter number of elements: "; cin >> n;

	for (x = 0; x < n; x++)
	{
		cout << "Number " << x + 1 << ": "; cin >> arr[x];
	}

	for (int x = 0; x < n; x++)
	{
		sum = arr[0] + arr[1] + arr[2] + arr[3] + arr[4] + arr[5] + arr[6] + arr[7] + arr[8] + arr[9];
	}
		average = sum / n;
		cout << "\nTotal: " << sum; cout << "\n";
		cout << "Average = " << average;

	for (x = 0; x < n; x++)
	{
		if (arr[0] > arr[x])
			arr[0] = arr[x];
	}

		cout << "\nSmallest integer: " << arr[0]; cout << "\n";

	for (x = 0; x < n; x++)
	{
		if (arr[0] < arr[x])
			arr[0] = arr[x];
	}

		cout << "Largest integer: " << arr[0];

	
	_getch();
	return 0;

}