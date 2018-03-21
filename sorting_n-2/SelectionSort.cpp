#include"SelectionSort.h"

void SelectionSort(int *A, int N)
{
	for (int i = 0; i < N - 1; i++)
		for (int j =  i + 1; j < N ; j++)
			if (A[i] > A[j])
				Swap(&A[i], &A[j]);

}