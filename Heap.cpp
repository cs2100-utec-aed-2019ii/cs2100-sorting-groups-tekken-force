#include "Heap.h"
template<typename T>
Heap<T>::Heap(T* arr, int size) : Sorting<T>(arr, size){}

template<typename T>
void Heap<T>::heap(T* a, int n, int i)
{
  int large = i; 
  int left=2*i+1, right=2*i+2;
  
  if (left < n && a[left] > a[large]) 
        large = left;
  
  if (right < n && a[right] > a[large]) 
        large = right; 
  
    if (large != i) 
    { 
        this->Swap(a[i], a[large]); 
  
        
        this->heap(a, n, large); 
    } 
}

template<typename T>
void Heap<T>::Sort_array(){
 int n = this->size;
  
  for (int i=(n/2)-1; i>=0; i--)
	 this->heap(this->arr, n, i);

  for (int i=n-1; i>0; i--){
    this->Swap(this->arr[0], this->arr[i]);
    this->heap(this->arr, i, 0);
  }

}
