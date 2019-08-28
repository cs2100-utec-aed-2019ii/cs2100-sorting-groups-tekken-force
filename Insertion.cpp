#include "Insertion.h"
    template<typename T>
    Insertion<T>::Insertion(T* arr, int size) : Sorting<T>(arr, size){}

    template<typename T>
    void Insertion<T>::Sort_array(){
	
	size_t j;
	for (size_t i =1 ; i< this->size ; i++){

		j = i;
		while (j>0 && this->arr[j-1]>this->arr[j]){
			std::swap(this->arr[j],this->arr[j-1]);
			j--;
		}


	}

    }
