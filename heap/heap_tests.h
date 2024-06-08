#ifndef DATASTRUCTURES_HEAP_TESTS_H
#define DATASTRUCTURES_HEAP_TESTS_H
#include "heap.h"

void create_random_heap(){
    Heap h({2,-35,0,12,99,56,11,13,4});
    h.print();
}
void standard_push(){
    Heap h({2,-35,0,120,9,56});
    h.print();
    h.push(99);
    h.print();
}
void create_empty_heap(){
    Heap h({});
    h.print();
}
void push_in_empty_heap(){
    Heap h({});
    h.push(2);
    h.print();
}
int return_top(){
    Heap h({13,-343,-67,-89,0,-45,22,-213});
    return h.top();
}
void pop_element_from_heap(){
    Heap h({32,13,54,8,0,3});
    h.print();
    h.pop();
    h.print();
}
void pop_from_empty(){
    Heap h({});
    h.pop();
}

#endif //DATASTRUCTURES_HEAP_TESTS_H
