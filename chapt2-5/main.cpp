#include <iostream>
#include "Array.h"

using namespace std;

int main()
{
    const int array_size = 4;

    // elementType -> int
    Array<int> ia(array_size);

    // elementType -> double
    Array<double> da(array_size);

    // elementType -> char
    Array<char> ca(array_size);

    int ix;
    for (ix = 0; ix < array_size; ++ix)
    {
        ia[ix] = ix;
        da[ix] = ix * 1.75;
        ca[ix] = ix + 'a';
    }

    for (ix = 0; ix < array_size; ++ix)
    {
        cout << "[ " << ix << "] ia: " << ia[ix]
            << "\tca: " << ca[ix]
            << "\tda: " << da[ix] << endl;
    }
    return 0;
}