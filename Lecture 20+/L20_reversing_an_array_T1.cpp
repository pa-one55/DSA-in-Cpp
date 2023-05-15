#include <iostream>
using namespace std;
int main()
{
    int arr1[] = {333,115,992,454,101};
    int arr2[] = {};
    int L = sizeof(arr1) / sizeof(int);
    int start = 0;
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
