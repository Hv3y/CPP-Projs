#include<iostream>
using namespace std;

int main()
{
	int* p;
	int* n;
	p = new int;
	n = new int;

	int sum;
	*p = 20;
	*n = 60;
	sum = *p + *n;
	cout << sum << endl;
	delete p;
	delete n;

}