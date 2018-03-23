
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