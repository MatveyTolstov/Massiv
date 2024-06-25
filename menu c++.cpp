#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    setlocale(0, "");

    double A[3][5];
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 5; ++j)
            cin >> A[i][j];

    for (int i = 0; i < 3; i++) {
        double sum = 0;
        for (int j = 0; j < 5; j++) {
            sum += A[i][j];
        }
        double average = sum / 5;
        cout << "Среднее арифметическое для " << i + 1 << " строки: " << average << endl;
    }

    return 0;
}
