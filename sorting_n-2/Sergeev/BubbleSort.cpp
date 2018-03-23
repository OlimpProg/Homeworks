#include"BubbleSort.h"

void BubbleSort(int *A, int N)
{
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N - 1; j++)
			if (A[j] > A[j + 1])
				Swap(&A[j], &A[j + 1]);

}
