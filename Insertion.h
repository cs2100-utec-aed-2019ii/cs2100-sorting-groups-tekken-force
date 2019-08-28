#ifndef SORTING_INSERTION_H
#define SORTING_INSERTION_H
#include "Sorting.h"
    template<typename T>
    class Insertion : public Sorting<T>{
    public:
        Insertion(T* arr, int size);
        void Sort_array();
    };


#endif //SORTING_INSERTION_H
