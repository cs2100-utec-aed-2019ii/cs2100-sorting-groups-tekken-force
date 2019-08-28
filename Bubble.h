#ifndef SORTING_BUBBLE_H
#define SORTING_BUBBLE_H
#include "Sorting.h"
    template<typename T>
    class Bubble : public Sorting<T> {
    public:
        Bubble(T *arr, int size);

        void Sort_array();
    };


#endif //SORTING_BUBBLE_H
