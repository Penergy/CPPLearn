#include <iostream>
#include "IntArray.hpp"
#include "IntArrayRC.hpp"


using namespace std;

class IntArray;

int main()
{
    // // 单个IntArray类的对象
    // IntArray myArray(1024);

    // // 指向IntArray类对象的指针
    // IntArray *pArray = new IntArray(1024);

    // // 用myArray数组中的最小元素来初始化min_val
    // int min_val = myArray.min();
    // // 在动态分配的IntArray对象中查找最大值
    // int max_val = pArray->max();

    // cout << "min = " << min_val << endl;
    // cout << "max = " << max_val << endl;

    // // 比较两个IntArray
    // IntArray myArray0, myArray1;
    // // 调用拷贝赋值成员函数
    // // myArray0.operator=(myArray1);
    // myArray0 = myArray1;

    // // 调用等于成员函数
    // // myArray0.operator==(myArray1);
    // if (myArray0 == myArray1)
    // {
    //     cout << "!!our assignment operator works!" << endl;
    // }

    // IntArray array;
    // int array_size = array.size();
    // cout << "array_size = " << array_size << endl;

    // // 使用第二个构造函数，构造对象
    // int ia[10] = {0,1,2,3,4,5,6,7,8,9};
    // IntArray ia3(ia, 10);
    // // 用myArray数组中的最小元素来初始化min_val
    // int min_val_ia3 = ia3.min();
    // // 用myArray数组中的最小元素来初始化max_val
    // int max_val_ia3 = ia3.max();
    // // 
    // int array_size_ia3 = ia3.size();
    // cout << "ia3 min = " << min_val_ia3 << endl;
    // cout << "ia3 max = " << max_val_ia3 << endl;
    // cout << "ia3 array_size = " << array_size_ia3 << endl;

    int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13};
    IntArrayRC iarc(ia, 8);

    return 0;
}

