#include<iostream>
#include<fstream>
#include<string>

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
int main(int argc, char **argv)
{
	if (!argv[1])
	{
		argv[1] = "1.txt";
		argv[2] = "2.txt";
	}
	int Mas[1000];
	std::ifstream in(argv[1]);
	std::ofstream out(argv[2]);
	std::cout<< argv[0]<< std::endl;
	int N = 0;
	if (in) 
	{ 
		while (!in.eof())
		{
			in >> Mas[N];
			N++;
		}
	}

	for (int i = 0; i < N; i++)
		std::cout << Mas[i] << "\t";
	std::cout << std::endl;
	std::cout << "Sorting..." << std::endl;
	BubbleSort( Mas, N);
	for (int i = 0; i < N; i++)
	{
		std::cout << Mas[i] << "\t";
		out << Mas[i] << " ";
	}

	in.close();
	out.close();
	return 42;
}