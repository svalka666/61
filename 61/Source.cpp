#include <iostream>
#include <iomanip>
#include <time.h> 

using namespace std;


void Create(int* r, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        r[i] = Low + rand() % (High - Low + 1);
}
int Sum(int* r, const int size, int& k) {
    int s = 0;
    for (int i = 0; i < size; i++) {
        if (!((r[i] % 2 == 0) || (r[i] % 13 == 0))) {
            s += r[i];
            r[i] = 0;
            k++;
        }
    }
    return s;
}
void Print(int* r, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << r[i];
    cout << endl;
}
int main()
{
    srand((unsigned)time(NULL));
    int k = 0;
    const int n = 23;
    int r[n];

    int Low = 4;
    int High = 68;

    Create(r, n, Low, High);
    Print(r, n);
    cout << "Sum: " << Sum(r, n, k) << ", Count: " << k << endl;
    Print(r, n);

    return 0;
}