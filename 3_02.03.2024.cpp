#include <iostream>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "Russian");
    double b = 7435421243;
    double kb = b / 1024;
    double mb = kb / 1024;
    double gb = mb / 1024;
    cout << b << " באיע = " << gb << " ֱֳ" << endl;
    cout << b << " באיע = " << mb << " ֱּ" << endl;
    cout << b << " באיע = " << kb << " Êֱ" << endl;
    return 0;
}
