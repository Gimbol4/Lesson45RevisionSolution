// Task 03 [The matching values]
// Совпадающие значения
// 
// Дан вектор целочисленных значений. Необходимо спроектировать 
// и реализовать функцию, которая проверяет, что среди значений 
// элементов вектора есть хотя бы одна пара совпадающих.

// 0 1 2 3 4 5 6 
// 1 2 3 4 5 8 7 
 
#include "logic.h"

bool is_the_same_elements(int array[DEFAULT_SIZE], int size) {
	for (int i = size; i > 0; i--)
	{
		for (int n = 0; n < size; n++) {
			if (array[n] == array[i] && i != n) {
				return true;
			}
		}
	}
	return false;
}      