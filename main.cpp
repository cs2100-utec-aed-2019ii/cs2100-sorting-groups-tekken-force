#include <iostream>
#include "Sorting.cpp"
#include "Insertion.cpp"
#include "Bubble.cpp"
#include "Heap.cpp"
#include "Selection.cpp"
#include "Merge.cpp"
int main() {
    int* arr = new int[6];
    for(int i = 0; i <= 10; i++){
        arr[i] = 20-i;
    }

    Heap<int> as(arr, 6);

    as.Print_array();
    as.Sort_array();
    as.Print_array();
    return 0;
}
