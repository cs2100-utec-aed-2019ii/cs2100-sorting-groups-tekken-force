//
// Created by bhn16 on 25/08/19.
//

#include "Selection.h"
#include <algorithm>
    template<typename T>
    Selection<T>::Selection(T* arr, int size) : Sorting<T>(arr, size){}


    template<typename T>
    void Selection<T>::Sort_array(){
        size_t k = 0;
        for(size_t i = 0; i < this->size; i++){
            for(size_t j = k; j < this->size; j++){
                if(this->arr[k] > this->arr[j]){
                    this->Swap(this->arr[k],this->arr[j]);
                }
            }
            k++;
        }
    }
