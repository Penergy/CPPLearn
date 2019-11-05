#include <iostream>
using namespace std;

void f(int *p)
{
    cout << "vale of f(p):" << p << endl;
    cout << "vale of *p:" << *p << endl;
    *p = 15;
}

void g(int k)
{
    cout << "k = " << k << endl;
}

int main()
{
    int a = 10;
    int p;

    int b[3] = {2, 2, 2};

    cout << "Hello, world!" << endl;
    cout << "sizeof(int) = " << sizeof(double) << endl;
    cout << "sizeof(a) = " << sizeof(a) << endl;
    f(&a);
    g(a);
    cout << "address of a: " << &a << endl;
    cout << "address of p: " << &p << endl;
    cout << "address of b: " << &b << endl;
    cout << "address of b: " << b << endl;
    cout << "address of b[0]: " << &b[0] << endl;
    cout << "address of b[1]: " << &b[1] << endl;
    cout << "address of b[2]: " << &b[2] << endl;
    return 0;
}
