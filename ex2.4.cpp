#include <iostream>
using namespace std;

int main()
{
    const int MAX_SIZE= 10;
    int *pi = new int(MAX_SIZE);
    cout << " pi\'s address is " << pi << endl;
    int *pia = new int[MAX_SIZE];
    for(int i = 0; i < MAX_SIZE; i++)
    {
        pia[ *pi ] = *pi; // 通过编译，但是数组已经越界
        *pi = *pi + 1;
    }

    for(int i = 0; i < MAX_SIZE; i++)
    {
        cout << " pia " << i << "\'s address is " << &pia[i] << endl;
        cout << " pia " << i << "\'s value is " << pia[i] << endl;
    }

    delete pi;
    delete [] pia;
    return 0;
}