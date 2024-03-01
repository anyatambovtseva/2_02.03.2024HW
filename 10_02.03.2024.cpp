#include <iostream>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "Russian");
    char chr1 = '1';
    char chr2 = '2';
    char chr3 = '3';
    char chr4 = '4';
    char chr5 = '5';
    int s = (chr1 - '0') * 10000 + (chr2 - '0') * 1000 + (chr3 - '0') * 100 + (chr4 - '0') * 10 + (chr5 - '0');
    cout << "Слитые символы в число: " << s << endl;
    return 0;
}
