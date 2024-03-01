#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float s;
	cout << "введите вещественное число: ";
	cin >> s;
	s = s * 0.1;
	cout << s;
	return 0;
}
