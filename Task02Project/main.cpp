#include "logic.h"

int main() {
	double array[DEFAULT_SIZE];
	int length;
	
	do {
		system("cls");
		cout << "Input length of array: ";
		cin >> length;
	} while (length < 1);


	cout << "Input an elements of array: ";
	for (int index = 0; index < length; index++)
	{
		cin >> array[index];
	}


	cout << "Summ of small numbers: " << summ_all_small_numbers(array, length);
	return 0;
}