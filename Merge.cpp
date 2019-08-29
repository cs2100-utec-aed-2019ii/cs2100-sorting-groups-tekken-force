//
// Created by bhn16 on 25/08/19.
//

#include "Merge.h"
template<typename T>
Merge<T>::Merge(T* arr, int size) : Sorting<T>(arr, size){}

template<typename T>
void Merge<T>::Sort_array() {
    mergeSort(this->arr,0,(this->size)-1);
}

template <typename T>
void Merge<T>::merge(T* a, int l, int m, int r){
    int i = 0, j = 0, k = l;
    int n1 = m - l + 1;
    int n2 =  r - m;
    T* L = new T[n1];
    T* R = new T[n2];

    for (int i = 0; i < n1; i++)
        L[i] = a[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = a[m + 1+ j];

    while (i < n1 && j < n2){
        if (L[i] <= R[j]){
            a[k] = L[i];
            i++;
        }
        else{
            a[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1){
        a[k] = L[i];
        i++;
        k++;
    }
    while (j < n2){
        a[k] = R[j];
        j++;
        k++;
    }

    delete[] R;
    delete[] L;
}

template<typename T>
void Merge<T>::mergeSort(T*a, int l, int r){
    if (l < r){
        int m = l+(r-l)/2;
        mergeSort(a, l, m);
        mergeSort(a, m+1, r);
        merge(a, l, m, r);
    }
}