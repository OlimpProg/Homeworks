#include"SortN2.h"

int* resize(int *arr, int N)
{
	int *arr2 = new int[N * 2];
	for (int i = 0; i < N; i++)
		arr2[i] = arr[i];

	delete[] arr;

	return arr2;
}
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