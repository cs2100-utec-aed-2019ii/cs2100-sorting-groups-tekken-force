#ifndef SORT_H
#define SORT_H

#include <string>
#include <algorithm>


template <typename T>
class Sort {
public:
    Sort( T *elements, size_t size): elements(elements), size(size) {}
    virtual void execute() = 0;  


protected:
    T *elements;
    size_t size; 
};

#endif
