#include <iostream>

template <typename T>
class DynamicArray
{
public:
    int size;
    T *arr;
    DynamicArray();
    DynamicArray(const T *ptr, int size);
    DynamicArray(const DynamicArray &o);

    void push_back(T elem);

    void insert(T elem, int pos);
    void remove(int pos);

    int getSize() const
    {
        return size;
    }
    void print() const;

    ~DynamicArray();
};

template <typename T>
DynamicArray<T>::DynamicArray()
{
    size = 0;
    arr = new T[0];
}

template <typename T>
DynamicArray<T>::DynamicArray(const T *ptr, int size)
{
    this->size = size;
    this->arr = new T[size];

    for (int i = 0; i < size; i++)
        arr[i] = ptr[i];
}

template <typename T>
DynamicArray<T>::DynamicArray(const DynamicArray &o)
{
    this->size = o.size;
    this->arr = new T[o.size];

    for (int i = 0; i < size; i++)
        arr[i] = o.arr[i];
}

template <typename T>
void DynamicArray<T>::push_back(T elem)
{
    T *tmp = new T[size + 1];
    for (int i = 0; i < size; i++)
        tmp[i] = arr[i];
    tmp[size] = elem;

    size += 1;
    delete[] arr;

    arr = tmp;
}

template <typename T>
void DynamicArray<T>::insert(T elem, int pos)
{
    if (pos < size)
    {
        int i;
        T *tmp = new T[size + 1];
        for (i = 0; i < pos; i++)
            tmp[i] = arr[i];
        tmp[i] = elem;
        for (; i < size; i++)
            tmp[i + 1] = arr[i];

        size += 1;
        delete[] arr;

        arr = tmp;
    }
}

template <typename T>
void DynamicArray<T>::remove(int pos)
{
    if (pos < size)
    {
        int i;
        T *tmp = new T[size - 1];
        for (i = 0; i < pos; i++)
            tmp[i] = arr[i];
        for (i = pos + 1; i < size; i++)
            tmp[i - 1] = arr[i];

        size -= 1;
        delete[] arr;

        arr = tmp;
    }
}

template <typename T>
void DynamicArray<T>::print() const
{
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

template <typename T>
DynamicArray<T>::~DynamicArray()
{
    delete[] arr;
}