#include "Quick.h"
template<typename T>
Quick<T>::Quick(T* arr, int size) : Sorting<T>(arr, size){}

template<typename T>
void Quick<T>::Sort_array(){
    this->QuickSort(this->arr, 0, (this->size)-1);
}
template <typename T>
void Quick<T>::QuickSort(T *a, int l, int h) {
    int i = l;
    int j = h;
    T pivot = a[(i+j)/2];
    T temp;

    while(i <= j){
        while(a[i] < pivot)
            i++;
        while(a[j] > pivot)
            j--;
        if(i <= j){
            this->Swap(a[i],a[j]);
            i++;
            j--;
        }
    }

    if(j > l){
        QuickSort(a, l, j);
    if(i < h)
        QuickSort(a, i, h);
    }
}
