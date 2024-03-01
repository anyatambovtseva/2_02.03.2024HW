#include <iostream>
using namespace std;
int main()
{
	int summa = 0;
	for (int i = 1; i <= 100; i++)
		summa += i * i;
	cout << summa;
	return 0;
}