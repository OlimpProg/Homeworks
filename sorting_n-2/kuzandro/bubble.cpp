#include <fstream>
#include <iostream>
#include <string>
#include "header.h"

using namespace std;


void bubble(int arr[], int n) {
	for (int i = 0; i<n; i++) {
		for (int j = 0; j<n - i - 1; j++) {
			if (arr[j]>arr[j + 1]) {
				//Swap(&arr[j], &arr[j + 1]);
				linkedSwap(arr[j], arr[j + 1]);
			}
		}
	}
}