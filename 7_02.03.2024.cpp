#include <iostream>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	string str1 = "pipipupu";
	string str2 = "pumpurum";
	if (str1[str1.length() - 1] == str2[0])
		cout << "��������� ������ ������ ������ ����� ������� ������� ������ ������";
	else
		cout << "��������� ������ ������ ������ �� ����� ������� ������� ������ ������";
	return 0;
}
