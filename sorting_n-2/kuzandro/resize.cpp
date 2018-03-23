#include <fstream>
#include <iostream>
#include <string>
#include "header.h"

using namespace std;

int *resize(int *arr, int n) {
	int *arr2 = new int[n * 2];

	for (int i = 0; i < n; i++) {
		arr2[i] = arr[i];
	}
	delete[] arr;
	return arr2;
}