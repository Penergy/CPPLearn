#ifndef IntArray_H
#define IntArray_H

/**
 * Description: 
 * 
 * 
 * 
 * 
 */
class IntArray
{
public:
    // 构造函数
    explicit IntArray(int sz = DefaultArraySize);
    IntArray(int *array, int array_size);
    IntArray(const IntArray &rhs); // 拷贝构造函数（copy constructor）

    // 析构函数
    virtual ~IntArray() { delete[] ia; }

    // 相等和不相等操作
    bool operator==(const IntArray &) const;
    bool operator!=(const IntArray &) const;
    // 赋值
    IntArray &operator=(const IntArray &);
    int size() const { return _size; }

    virtual int &operator[](int index) { return ia[index]; }
    virtual void sort();
    virtual int min() const;
    virtual int max() const;

    // 如值再数组中找到
    // 返回第一次出现的索引
    // 否则返回 -1
    virtual int find(int value) const;

protected:
    // 私有实现代码
    static const int DefaultArraySize = 12;
    void init(int sz, int *array);
    // 内部数据
    int _size;
    int *ia;
};
#endif