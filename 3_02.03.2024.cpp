#include <iostream>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "Russian");
    double b = 7435421243;
    double kb = b / 1024;
    double mb = kb / 1024;
    double gb = mb / 1024;
    cout << b << " ���� = " << gb << " ��" << endl;
    cout << b << " ���� = " << mb << " ��" << endl;
    cout << b << " ���� = " << kb << " ��" << endl;
    return 0;
}
