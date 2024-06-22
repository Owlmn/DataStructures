#ifndef DATASTRUCTURES_HEAP_TESTS_H
#define DATASTRUCTURES_HEAP_TESTS_H
#include "heap.h"
#include <algorithm>

void create_random_heap() {
    Heap h({2,-35,0,12,99,56,11,13,4});
    h.print();
}
void standard_push() {
    Heap h({2,-35,0,120,9,56});
    h.print();
    h.push(99);
    h.print();
}
void create_empty_heap() {
    Heap h({});
    h.print();
}
void push_in_empty_heap() {
    Heap h({});
    h.push(2);
    h.print();
}
int return_top() {
    Heap h({13,-343,-67,-89,0,-45,22,-213});
    return h.top();
}
void pop_element_from_heap() {
    Heap h({32,13,54,8,0,3});
    h.print();
    h.pop();
    h.print();
}
void pop_from_empty() {
    Heap h({});
    h.pop();
}
void add_million_elements_and_delete_half() {
    Heap h({});
    std::vector<int> elements;

    srand(time(0));
    for (int i=0; i < 1000000; ++i) {
        int el=rand();
        elements.push_back(el);
        h.push(el);
    }

    std::sort(elements.begin(), elements.end());
    int expected_median=elements[500000-1];

    for (int i=0; i < 500000; ++i) {
        h.pop();
    }

    int heap_median=h.top();
    std::cout<<"\tExpected median: "<<expected_median<<std::endl;
    std::cout<<"\tHeap median: "<<heap_median<<std::endl;
}

#endif //DATASTRUCTURES_HEAP_TESTS_H
