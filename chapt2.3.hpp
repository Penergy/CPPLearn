class IntArray
{
public:
    // 构造函数
    explicit IntArray(int sz = DefaultArraySize);
    IntArray(int *array, int array_size);
    IntArray(const IntArray &rhs); // 拷贝构造函数（copy constructor）

    // 相等和不相等操作
    bool operator==(const IntArray &) const;
    bool operator!=(const IntArray &) const;
    int& operator[]( int index);

    // 赋值
    IntArray &operator=(const IntArray &);

    int size() const { return _size; }
    void sort();

    int min() const;
    int max() const;

    // 如值再数组中找到
    // 返回第一次出现的索引
    // 否则返回 -1
    int find(int value) const;

    // 析构函数
    ~IntArray() { delete [] ia; }
private:
    // 私有实现代码
    static const int DefaultArraySize = 12;
    // 内部数据
    int _size;
    int *ia;
};