#include <iostream>
using namespace std;

void swap(int *q1, int *q2);
void sort(int *q);

int main(int argc, char *argv[]) {

	

	int A[5] = { 2,-1,4,9,0 };

	int *q = A;
	sort(q);



	return 0;
}