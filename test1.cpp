#include <iostream>
using namespace std;

void minmax(int a[], int len, int *max, int *min);

int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,12,13,14,16,17,21,23,55,};
    int min, max;
    cout << "main sizedof(a) = " << sizeof(a) << endl;
    cout << "main a= " << a << endl;
    minmax(a, sizeof(a) / sizeof(a[0]), &min, &max);
    cout << "min = " << min << ", max = " << max << endl;
    int *p = &min;
    cout << "*p = " << *p << endl;
    cout << "p[0] = " << p[0] << endl;
    return 0;
}

void minmax(int a[], int len, int *max, int *min)
{
    int i;
    cout << "minmax sizeof(a) = " << sizeof(a) << endl;
    cout << "minmax a= " << a << endl;
    *min = *max = a[0];
    for (i = 1; i < len; i++)
    {
        if (a[i] < *min)
        {
            *min = a[i];
        }
        if (a[i] > *max)
        {
            *max = a[i];
        }
    }
}