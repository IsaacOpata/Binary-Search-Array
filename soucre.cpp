//Isaac Opata
//June 24, 2024
//Binary Search algorithm

#include <iostream>
using namespace std;

const int SIZE = 10;

bool listSearch(const long[], int, long);

int main()
{
	long tickets[SIZE] = { 13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121 };
	long winNumber;

	cout << "Enter five digist winning number: ";
	cin >> winNumber;

	if (listSearch(tickets, SIZE, winNumber))
		cout << "Your ticket is the winner!\n";
	else
		cout << "Your ticket is not the winner.\n";

	return 0;
}

bool listSearch(const long list[], int numElements, long value)
{
	bool found = false;
	int first = 0, middle, last = numElements - 1;

	while (!found && first <= last)
	{
		middle = (first + last) / 2;
		if (list[middle] == value)
			found = true;
		else if (list[middle] > value)
			last = middle - 1;
		else
			first = middle + 1;
	}
	return found;
}