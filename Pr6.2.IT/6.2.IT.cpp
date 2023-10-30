#include <iostream>

using namespace std;

void print(int* a, const int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
        cout << "     ";
        if (i == 12)
        {
            cout << "     " << endl;
        }
    }
}

int Max(int* a, const int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] > max)
            max = a[i];
    return max;
}

int Min(int* a, const int n)
{
    int min = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] < min)
            min = a[i];
    return min;
}

int Avarage(int* a, const int n)
{
    int Avarage = (Max(a, n) + Min(a, n)) / 2;
    return Avarage;
}

int main()
{
    const int n = 13;
    int a[n] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };

    cout << "Array = ";
    cout << "     ";
    print(a, n);

    Max(a, n);

    Min(a, n);

    Avarage(a, n);

    cout << "Avarage = " << Avarage(a, n) << endl;

    return 0;
}
