#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int s, summa = 0;
	cout << "������� �����: ";
	cin >> s;
	while (s != 0)
	{
		summa += s % 10;
		s = s / 10;
	}	
	cout << "����� ���� ����� ����� " << summa;
	return 0;
}
