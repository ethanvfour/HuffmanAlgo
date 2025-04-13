#ifndef MIN_HEAP
#define MIN_HEAP

#include <vector>
#include <algorithm>

/*
Left = (2i + 1)
right = (2i + 2)

parent (i-1)/2

sift down -> 

sift up <-
*/

template<class T>
class pQMin
{
private:
    std::vector<T> arr;
    void heapify();

    void siftUp(int);

    void siftDown(int);
public:
    pQMin();

    pQMin(std::vector<T>);

    void push_onto(T adder);

    void pop_out();

    T front();

    bool isEmpty() const;

    std::size_t getSize() const;
};


template <class T>
void pQMin<T>::heapify()
{
    for(int i = (arr.size() / 2) - 1; i >= 0; i--)
        siftDown(i);
}

template <class T>
void pQMin<T>::siftUp(int index)
{
    int parent = (index - 1) / 2;
    if(parent >= 0 && arr[parent] > arr[index])
    {
        std::swap(arr[parent], arr[index]);
        siftUp(parent);
    }
}

template <class T>
void pQMin<T>::siftDown(int index)
{
    int l = (2 * index) + 1, r = (2 * index) + 2;
    int recurse = index;
    if(l < arr.size() && arr[recurse] > arr[l])
        recurse = l;
    if(r < arr.size() && arr[recurse] > arr[r])
        recurse = r;
    if(recurse != index)
    {
        std::swap(arr[recurse], arr[index]);
        siftDown(recurse);
    }
}

template <class T>
pQMin<T>::pQMin(){}

template <class T>
pQMin<T>::pQMin(std::vector<T> array)
{
    arr = array;
    heapify();
}

template <class T>
void pQMin<T>::push_onto(T adder)
{
    arr.push_back(adder);
    siftUp(arr.size() - 1);
}

template <class T>
void pQMin<T>::pop_out()
{
    if(!isEmpty())
    {
        arr[0] = arr[arr.size() - 1];
        arr.pop_back();
        siftDown(0);
    }
}

template <class T>
T pQMin<T>::front()
{
    if(!isEmpty())
        return arr[0];
    return T();
}

template <class T>
bool pQMin<T>::isEmpty() const
{
    return arr.empty();
}

template <class T>
std::size_t pQMin<T>::getSize() const
{
    return arr.size();
}

#endif