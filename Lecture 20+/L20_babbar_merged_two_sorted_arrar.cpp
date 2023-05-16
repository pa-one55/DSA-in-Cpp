#include <iostream>
using namespace std;

int main()
{
    int arr1[14] = {1,2,3,6,9,14,18,19,23,24,66,79,99,909};
    int arr2[6] = {4,5,10,11,15,16};
    
    int size1 = sizeof(arr1)/sizeof(int);
    int size2 = sizeof(arr2)/sizeof(int);
    
    int arr3[size1 + size2] = {0};
    
    int c1 = 0;
    int c2 = 0;
    int c3 = 0;
    
    while( c1 < size1 && c2 < size2 ) {
        //code
        if ( arr1[c1] < arr2[c2] ){
            arr3[c3] = arr1[c1];
            c1++;
            c3++;
        }
        else if ( arr1[c1] > arr2[c2] ){
            arr3[c3] = arr2[c2];
            c2++;
            c3++;
        }
    }
    
    
    while ( c1 < size1 ){
        arr3[c3] = arr1[c1];
        c3++;
        c1++;
    }
    while ( c2 < size2 ){
        arr3[c3] = arr2[c2];
        c3++;
        c2++;
    }
    
    
    for (int i = 0; i < (size1 + size2 ); i++ ){
        cout<<arr3[i]<<endl;
    }

    return 0;
}
