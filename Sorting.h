#ifndef SORTING_SORTING_H
#define SORTING_SORTING_H

#include <algorithm>
#include <vector>
#include <iostream>
template<typename T>
class Sorting {
protected:
    T *arr;
    int size;
public:
    Sorting(T *arr,int size);
    Sorting();
    void Swap(int& a, int& b);
    void Print_array();
    virtual void Sort_array() = 0;
};

#endif //SORTING_SORTING_H
