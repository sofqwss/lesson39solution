#include "sort.h"

void bubble_sort(int* array, int size) {
	for (int g = 0;  g < size - 1; g++)
	{
		for (int i = 0; i < size; i++) {
		if (array[i] < array[i + 1])
		{
			int t = array[i];
			array[i] = array[i + 1];
			array[i + 1] = t;
		}
	}
}