#include <iostream>
#include "heap/heap_tests.h"

using namespace std;

void testing(){
    cout<<"Random heap: "; create_random_heap();
    cout<<"Standard push: "; standard_push();
    cout<<"Empty heap: "; create_empty_heap();
    cout<<"Empty heap push: "; push_in_empty_heap();
    cout<<"Top: "<<return_top()<<endl;
    cout<<"Pop: "; pop_element_from_heap();
    cout<<"Pop from empty: "; pop_from_empty();
}
int main() {
    testing();
    return 0;
}
