#include <iostream>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "Russian");
    double b = 7435421243;
    double kb = b / 1024;
    double mb = kb / 1024;
    double gb = mb / 1024;
    cout << b << " байт = " << gb << " ГБ" << endl;
    cout << b << " байт = " << mb << " МБ" << endl;
    cout << b << " байт = " << kb << " КБ" << endl;
    return 0;
}
