// Task 02 [The sum of average elements]
// Сумма средних элементов
// 
// Дан вектор вещественных(дробных) значений. Необходимо спроектировать
// и реализовать функцию, которая находит сумму всех элементов вектора,
// абсолютная величина которых меньше среднего арифметического всех элементов.
// Далее необходимо разработать полноценный или тестовый проект для полной 
// демонстрации работоспособности данной функции.

#include "logic.h"

double summ_all_small_numbers(double array[DEFAULT_SIZE], int length) {
	double mid = 0;
	double summ = 0;
	for (int index = 0; index < length; index++)
	{
		mid = mid + array[index];
	}
	mid = mid / length;

	for (int index = 0; index < length; index++)
	{
		if (array[index] < mid) {
			summ = summ + abs(array[index]);
		}
	}
	return summ;
}