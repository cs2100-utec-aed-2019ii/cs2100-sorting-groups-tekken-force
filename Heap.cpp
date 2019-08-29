#include "Heap.h"
template<typename T>
Heap<T>::Heap(T* arr, int size) : Sorting<T>(arr, size){}

template<typename T>
void Heap<T>::heap(T* a, int i, int delim)
{
  int left=2*i+1, right=2*i+2;
  if (right >= delim) return;
  
  if ((a[left] >a[right]) && (a[left] > a[i]))
  {
    this->Swap(a[i], a[left]);
    this->heap(a, left, delim);
  }
  else if(a[right] > a[i]) 
  {
    this->Swap(a[i], a[right]);
    this->heap(a, right, delim);
  }
}

template<typename T>
void Heap<T>::Sort_array(){
 int n = this->size;
  
  for (int i=(n/2)-1; i>=0; --i)
	 this->heap(this->arr, i, n-1);

  for (int i=n-1; i>0; --i){
    this->Swap(this->arr[i], this->arr[0]);
    this->heap(this->arr, 0, i);
  }

}
