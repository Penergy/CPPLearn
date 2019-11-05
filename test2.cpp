#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    char s[] = "Hello World!";
    char s2[] = "Hello World!";
    cout << "i = " << &i << endl;
    cout << "s = " << &s << endl;
    cout << "s2 = " << &s2 << endl;
    return 0;
}