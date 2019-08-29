//
// Created by bhn16 on 25/08/19.
//
//#include "Sorting.h"
#ifndef SORTING_SELECTION_H
#define SORTING_SELECTION_H
#include "Sorting.h"
    template<typename T>
    class Selection : public Sorting<T>{
    public:
        Selection(T* arr, int size);
        Selection();
        void Sort_array();
    };
#endif //SORTING_SELECTION_H
