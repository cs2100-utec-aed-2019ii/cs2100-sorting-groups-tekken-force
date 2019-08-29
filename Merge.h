//
// Created by bhn16 on 25/08/19.
//

#ifndef SORTING_MERGE_H
#define SORTING_MERGE_H
#include "Sorting.h"
    template<typename T>
    class Merge : public Sorting<T>{
    public:
        Merge(T* arr, int size);
        void Sort_array();
        void mergeSort(T*a, int l, int r);
        void merge(T* a, int l, int m, int r);
    };


#endif //SORTING_MERGE_H
