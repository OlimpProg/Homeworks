#include<iostream>
#include<fstream>
#include<string>
#include<time.h>
#include"BubbleSort.h"

int main(int argc, char **argv)
{
	int *Mas = new int[1];
	std::ifstream in(argv[1]);
	std::ofstream out(argv[2]);
	std::cout<< argv[0]<< std::endl;
	int N = 0;
	clock_t tiks;
	double seconds;

	if (in) 
	{ 
		int i = 1;
		while (!in.eof())
		{ 
			if (N >= i)
				Mas = resize(Mas, N), i = N * 2;
			in >> Mas[N];
			N++;
		}
	}
	for (int i = 0; i < N; i++)
		std::cout << Mas[i] << "\t";
	std::cout << std::endl;
	
	std::cout << "Sorting..." << std::endl;

	tiks = clock();

	BubbleSort( Mas, N);

	tiks = clock() - tiks;
	seconds = (double)tiks / CLOCKS_PER_SEC;
	
	std::cout <<"Time:\t"<< seconds << std::endl;
	for (int i = 0; i < N; i++)
	{
		//std::cout << Mas[i] << "\t";
		out << Mas[i] << " ";
	}
	delete[] Mas;
	in.close();
	out.close();
	return 42;
}
