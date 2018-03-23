#include <iostream>
using namespace std;


int *resize(int *arr, int  n) {
	int *arr1 = new int[n + 1];
	for (int i = 0; i < n; i++) {
		arr1[i] = arr[i];
	}

	delete[] arr;

	return arr1;

}