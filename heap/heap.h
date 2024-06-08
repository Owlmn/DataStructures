#ifndef DATASTRUCTURES_HEAP_H
#define DATASTRUCTURES_HEAP_H
#include <vector>

class Heap {
    std::vector <int> array;

    void sift_up(int indx);
    void sift_down(int indx);

public:
    void push(int el);
    void pop();
    int top();
    void print();
    Heap(const std:: vector <int> &mass) : array(mass){
        for (int i=mass.size()/2; i>=0; --i){
            sift_down(i);
        }
    }
};
#endif //DATASTRUCTURES_HEAP_H
