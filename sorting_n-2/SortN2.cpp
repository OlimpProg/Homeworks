#include<iostream>
#include<fstream>
#include<string>
#include"SortN2.h"
int main(int argc, char **argv)
{
	int *Mas = new int[1];
	std::ifstream in(argv[1]);
	std::ofstream out(argv[2]);
	std::cout<< argv[0]<< std::endl;
	int N = 0;
	if (in) 
	{ 
		while (!in.eof())
		{
			if (N * sizeof(int) >= sizeof(Mas))
				Mas = resize(Mas, N);
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
	delete[] Mas;
	in.close();
	out.close();
	return 42;
}