#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str = "pumpurum123";
	for (int i = str.length() - 1; i >= 0; i--)
		cout << str[i] << endl;
	return 0;
}