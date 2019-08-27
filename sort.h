#include <string>
#include <algorithm>


template <typename T>
class Sort {
public:
    Sort( T *elements, size_t size ) = 0
    virutal void execute() = 0;  


protected:
    T *elements;
    size_t size; 
}
