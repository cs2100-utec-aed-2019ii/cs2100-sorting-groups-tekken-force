//
// Created by bhn16 on 25/08/19.
//

#ifndef SORTING_QUICK_H
#define SORTING_QUICK_H
#include "Sorting.h"
    template<typename T>
    class Quick : public Sorting<T>{
    public:
        Quick(T* arr, int size);
        void Sort_array();
        void QuickSort(T* a, int l, int h);
    };


#endif //SORTING_QUICK_H
