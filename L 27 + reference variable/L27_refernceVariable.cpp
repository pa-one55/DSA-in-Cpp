#include <iostream>
using namespace std;

int main() {
    
    // Reference variable 

    int i = 5;
    int& j = i;  // now j is a reference variable for i
    
    cout<<i<<endl;  // - 5
    i++;
    cout<<i<<endl;  // - 6
    j++;
    cout<<i<<endl;  // - 7  - verifies that its the same memory, so changes in j will reflect in i

    return 0;
}


