#ifndef __ARRAY_H
#define __ARRAY_H

/**
 * Description: 
 * 
 * 
 * 
 * 
 */
template <class elemType>
class Array
{
public:
    // 构造函数
    explicit Array(int sz = DefaultArraySize);
    Array(elemType *array, int array_size);
    Array(const Array &rhs); // 拷贝构造函数（copy constructor）

    // 析构函数
    virtual ~Array() { delete[] ia; }

    // 相等和不相等操作
    bool operator==(const Array &) const;
    bool operator!=(const Array &) const;
    // 赋值
    Array &operator=(const Array &);
    int size() const { return _size; }

    virtual elemType &operator[](int index) { return ia[index]; }
    virtual void sort();
    virtual elemType min() const;
    virtual elemType max() const;

    // 如值再数组中找到
    // 返回第一次出现的索引
    // 否则返回 -1
    virtual int find(const elemType &value) const;

protected:
    // 私有实现代码
    static const int DefaultArraySize = 12;
    void init(int sz, int *array);
    // 内部数据
    int _size;
    elemType *ia;
};
#endif