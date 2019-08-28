#include "Sorting.h"
    template<typename T>
    Sorting<T>::Sorting(T *arr, int size):arr(arr), size(size){}

    template <typename T>
    Sorting<T>::Sorting() {}

    template<typename T>
    void Sorting<T>::Print_array()
    {
        for(int i = 0; i < this->size; i++)
        {
            std::cout << arr[i] << " ";
        }
        std::cout << "\n\n\n\n";
    }

    template<typename T>
    void Sorting<T>::Swap(int& a, int& b){
        T temp = a;
        a = b;
        b = temp;
    }

