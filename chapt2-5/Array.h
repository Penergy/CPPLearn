#ifndef __ARRAY_H
#define __ARRAY_H

/**
 * Description: 
 * 
 * 
 * 
 * 
 */
template <class T> class Array
{
public:
    // 构造函数
    explicit Array(int sz = DefaultArraySize);
    Array(T *array, int array_size);
    Array(const Array &rhs); // 拷贝构造函数（copy constructor）

    // 析构函数
    virtual ~Array() { delete[] ia; }

    // 相等和不相等操作
    bool operator==(const Array &) const;
    bool operator!=(const Array &) const;
    // 赋值
    Array &operator=(const Array &);
    int size() const { return _size; }

    virtual T &operator[](int index) { return ia[index]; }
    virtual void sort();
    virtual T min() const;
    virtual T max() const;

    // 如值再数组中找到
    // 返回第一次出现的索引
    // 否则返回 -1
    virtual int find(const T &value) const;

protected:
    // 私有实现代码
    static const int DefaultArraySize = 12;
    void init(int sz, T *array);
    // 内部数据
    int _size;
    T *ia;
};
#endif