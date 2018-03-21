#include"InsertionSort.h"

void InsertionSort(int *A, char N)
{
	for (int i = 1; i < N; i++)
	{
		int j = i - 1;
		while (j >= 0 && A[j] > A[j + 1])
		{
			Swap(&A[j], &A[j + 1]);
			j--;
		}
	}
}