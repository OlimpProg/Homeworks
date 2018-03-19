#include"SortN2.h"


void Swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void BubbleSort(int *A, char N)
{
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N - 1; j++)
			if (A[j] > A[j + 1])
				Swap(&A[j], &A[j + 1]);

}