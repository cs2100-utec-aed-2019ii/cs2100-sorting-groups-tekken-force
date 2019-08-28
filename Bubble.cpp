#include "Bubble.h"
#include <vector>
    template<typename T>
    Bubble<T>::Bubble(T *arr, int size) : Sorting<T>(arr, size){}

    template<typename T>
    void Bubble<T>::Sort_array() {
    	for (int i = 0; i < this->size - 1; i++) 
        for (int j = this->size - 1; i < j; j--) 
            if (this->arr[j] < this->arr[j - 1]) 
              std::swap(this->arr[j], this->arr[j - 1]);

    }

