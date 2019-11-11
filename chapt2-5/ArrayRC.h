#include <cassert>
#include "Array.h"
template <class T>

class ArrayRC: public Array<T> 
{
    public:
    ArrayRC( int sz = Array<T>::DefaultArraySize):Array<T> (sz){};

    ArrayRC( T *ia, int sz): Array<T>(ia, sz){};

    ArrayRC(const ArrayRC &rhs):Array<T>(rhs){};

    virtual T& operator[](int index)
    {
        assert(index >= 0 && index < Array<T>::size());
        return ia[index];
    };
    
    private:
    int _size;
    T *ia;

};