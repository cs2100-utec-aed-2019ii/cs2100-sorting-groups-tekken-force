#include <iostream>
#include "Sorting.cpp"
#include "Insertion.cpp"
#include "Bubble.cpp"
int main() {
    int* arr = new int[6];
    for(int i = 0; i <= 10; i++){
        arr[i] = 20-i;
    }

    Bubble<int> as(arr, 6);

    as.Print_array();
    as.Sort_array();
    as.Print_array();
    return 0;
}
