#include "util.h"
#include "sort.h"
#include <ctime>
#define SIZE 20

//это мощный комментарий
int main() {
	srand(time(NULL));
	int array[SIZE];

	init(array, SIZE, -20, 20);

	cout << "Before array: " << convert(array, SIZE) << endl;
	bubble_sort(array, SIZE);
	cout << "After array: " << convert(array, SIZE) << endl;
	return 0;
}