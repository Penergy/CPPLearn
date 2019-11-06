#include <iostream>
#include <cassert>
#include "Array.h"

template<class T> Array<T>::Array(int sz)
{
   init(sz, 0) ;
}

template<class T> Array<T>::Array(T *array, int sz)
{
    init(sz, array);
}

template<class T> Array<T>::Array(const Array &rhs)
{
    init(rhs._size, rhs.ia);
}

template<class T> T Array<T>::max() const
{
    if (_size == 0)
    {
        return -1;
    }
    T max = ia[0];
    for (int ix = 1; ix < _size; ++ix)
    {
        if (max < ia[ix])
        {
            max = ia[ix];
        }
    }
    return max;
}



template<class T> T Array<T>::min() const
{
    if (_size == 0)
    {
        return -1;
    }
    T min = ia[0];
    for (int ix = 1; ix < _size; ++ix)
    {
        if (min >= ia[ix])
        {
            min = ia[ix];
        }
    }
    return min;
}

template<class T> bool Array<T>::operator==(const Array &lft) const
{
    for (int ix = 1; ix < _size; ++ix)
    {
        if (ia[ix] != lft.ia[ix])
        {
            return false;
        }
    }
    return true;
}

template<class T> bool Array<T>::operator!=(const Array &lft) const
{
    for (int ix = 1; ix < _size; ++ix)
    {
        if (ia[ix] == lft.ia[ix])
        {
            return true;
        }
    }
    return false;
}

template<class T> Array<T>& Array<T>::operator=(const Array &lft)
{

    _size = lft._size;
    ia = lft.ia;

    return *this;
}

// int& IntArray::operator[] (int index)
// {
//     assert( index >= 0 && index < _size);
//     return ia[index];
// }

template<class T> void Array<T>::init(int sz, T *array)
{
    _size = sz;
    ia = new int[ _size ];
    for( int ix = 0; ix < _size; ++ix)
    {
        if(!array)
        {
            ia[ix] = 0;
        }
        else
        {
            ia[ix] = array[ix];
        }
    }
}

template<class T> void Array<T>::sort()
{

}

// template<class T> int Array<T>::find(T value) const
// {
//     return -1;
// }