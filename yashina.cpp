#include <iostream>
using namespace std;

void swap(int *q1, int *q2) {

}

void sort(int *q) {

	for (int i = 0; i < 10; i++) {

		for (int j = 0; j < (10 - i); j++) {

			if (*(q + j) > *(q + (j + 1)))

				swap(&q[j], &q[j + 1]);
			cout << *(q + j);
		}
	}
}

