#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 10;
    short mas[SIZE];
    short i;
    for (i = 0; i < 10; i++) {
        mas[i] = i + 1;
        cout << mas[i] << ' ';
    }
}