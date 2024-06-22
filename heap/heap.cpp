#include "heap.h"
#include <vector>
#include <iostream>

void Heap::sift_down(int indx) {
    while (2*indx+1 < array.size()) {
        int left=2*indx+1;
        int right=2*indx+2;
        int buffer=left;

        if (right < array.size() && array[right] > array[left]) {
            buffer=right;
        }
        if (array[indx] >= array[buffer]) {
            break;
        }
        std::swap(array[indx], array[buffer]);
        indx=buffer;
    }
}

void Heap::sift_up(int indx) {
    while (array[indx] > array[(indx-1)/2]) {
        std::swap(array[indx], array[(indx-1)/2]);
        indx=(indx-1)/2;
    }
}

int Heap::top() {
    return array[0];
}

void Heap::push(int el) {
    array.push_back(el);
    sift_up(array.size()-1);
}

void Heap::pop() {
    if (!array.empty()) {
        std::swap(array[0], array[array.size()-1]);
        array.pop_back();
        sift_down(0);
    }
}

void Heap::print() {
    for (int s: array) {
        std::cout<<s<<' ';
    }
    std::cout<<std::endl;
}



