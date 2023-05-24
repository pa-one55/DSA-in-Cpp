#include <iostream>
using namespace std;

int main() {

    // bad practise - variable size array
    int n;
    cin>>n;
    
    int arr[n];   // - allocating the size at RUNTIME - BAD
                  // should be done at compile time only
    
    // code//
    
    // explanation - when a program is compiled its assigned some memory
    // in that memory there are two types of memories
    // i) stack, ii) heap
    // STACK - the size of this memory is assigned on the basis of compile time variables
    // and generally stack is less in size
    // so when we dont give size to an array at compile time
    // the stack might end up getting smaller memory size than we need the array to be later
    // (when we take the input)

    // how to solve this issue ?
    // you can use heap memory


    return 0;
}



