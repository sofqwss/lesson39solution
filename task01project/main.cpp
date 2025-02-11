#include "util.h"
#include <ctime>
#define SIZE 20

int main() {
	srand(time(NULL));
	int array[SIZE];

	init(array, SIZE, -20, 20);

	cout << "Array: " << convert(array, SIZE) << endl;

	return 0;
}