#include <iostream>
#include "Sorting.cpp"
#include "Selection.cpp"
#include "Bubble.cpp"
#include "Heap.cpp"
#include "Insertion.cpp"
#include "Merge.cpp"
#include "Quick.cpp"
int main() {
    int* arr = new int[6];
    for(int i = 5; i >= 0; i--){
        arr[i] = i;
    }
    Selection<int> as(arr, 6);
    as.Sort_array();
    as.Print_array();


    std::cout << "Hola mundo" << std::endl;
    return 0;
}