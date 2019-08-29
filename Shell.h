#ifndef SORTING_SHELL_H
#define SORTING_SHELL_H
#include "Sorting.h"
    template<typename T>
    class Shell : public Sorting<T> {
    public:
        Shell(T *arr, int size);

        void Sort_array();
    };


#endif //SORTING_BUBBLE_H
