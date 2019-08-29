#ifndef SORTING_HEAP_H
#define SORTING_HEAP_H

#include "Sorting.h"

template<typename T>
class Heap : public Sorting<T> {
public:
        Heap(T *arr, int size);
        void Sort_array();
        void heap(T *a, int n, int i);
};


#endif //SORTING_HEAP_H
