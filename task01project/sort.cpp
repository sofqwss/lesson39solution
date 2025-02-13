#include "sort.h"
#include "util.h"
using namespace std;

// O(size * size ), O(N^2)
// best - O(N)
void bubble_sort(int* array, int size) {
	for (int j = 0; j < size - 1 - j; j++)
	{
		bool flag = true;
		for (int i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1]) {
				int t = array[i + 1];
				array[i + 1] = array[i];
				array[i] = t;
				flag = false;
			}
		}
		if (flag) {
			break;
		}
	}
}
void selected_sort(int* array, int size) {

	for (int j = 0; j < size - 1; j++)
	{

		int index = j;
		for (int i = j + 1; i < size; i++)
		{
			if (array[i] > array[index]) {
				index = i;
			}
		}
		int t = array[j];
		array[j] = array[index];
		array[index] = t;
	}
}