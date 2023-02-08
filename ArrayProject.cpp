#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 20;
    const int MAX_RAND_VALUE = 1000;
    unsigned short mas[SIZE];
    short i;
    int MIN = MAX_RAND_VALUE + 1;
    // Начальное заполнение массива
    for (i = 0; i < SIZE; i++) {
        mas[i] = rand() % MAX_RAND_VALUE;
    }
    // Вывод массива на консоль
    for (i = 0; i < SIZE; i++)
        cout << mas[i] << ' ';
    // Поиск минимального значения в массиве
    for (i = 0; i < SIZE; i++) {
        if (mas[i] < MIN)
            MIN = mas[i];
    }
    cout << endl << "Minimum is: " << MIN;
}