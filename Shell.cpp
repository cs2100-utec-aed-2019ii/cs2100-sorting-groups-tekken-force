#include "Shell.h"
template<typename T>
Shell<T>::Shell(T *arr, int size) : Sorting<T>(arr, size){}

template<typename T>
void Shell<T>::Sort_array() {
	int n = this->size;
    for (int gap = n/2; gap > 0; gap /= 2){ 
         
        for (int i = gap; i < n; i += 1){ 
             int temp = this->arr[i];   
             int j;             
            for (j = i; j >= gap && this->arr[j - gap] > temp; j -= gap) 
                this->arr[j] = this->arr[j - gap];               
            this->arr[j] = temp; 
        } 
    } 

 }

