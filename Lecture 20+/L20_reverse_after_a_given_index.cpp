#include <iostream>
using namespace std;
int main()
{
    int arr1[] = {1,2,3,4,5,6};
    
    int L = sizeof(arr1) / sizeof(int);
    
    int start = 3+1;
    int end = L-1;
    
    while ( start < end) {
        swap(arr1[start], arr1[end] );
        end --;
        start ++;
    }
    
    for (int i = 0; i < L; i++ ){
        cout<<arr1[i]<<endl;
    }



    return 0;
}
