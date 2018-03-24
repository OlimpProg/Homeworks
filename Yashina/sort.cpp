#include <iostream>
using namespace std;

void swap(int &q1, int &q2);

void sort(int *q, int size) {

	for (int i = 0; i < (size-1); i++) {

		for (int j = 0; j < (size-1 - i); j++) {

			if (q[j] > q[j + 1])

				swap(q[j], q[j + 1]);

			
		}
	}
}


