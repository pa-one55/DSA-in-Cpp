#include <iostream>
using namespace std;

int main() {

    // Variable size Array in heap memory
    int n;
    cin>>n;
    int* arr = new int[5];

    // taking input
    for (int i=0; i<n; i++ ){
        cin>>arr[i];
    }
    
    for(int i = 0; i< n; i++ ){
        cout<<arr[i]<<endl;
    }
    
    
    return 0;
}


