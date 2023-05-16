#include <iostream>
using namespace std;

int main()
{
    int arr1[14] = {1,2,3,6,9,14,18,19,23,24,66,79,99,909};
    int arr2[6] = {4,5,10,11,15,16};
    
    int size1 = 14;
    int size2 = 6;
    
    int n = size1 + size2;
    
    int arr3[n] = {0};

    int current1 = 0;
    int current2 = 0;
    int current3 = 0;
    
    for (int i = 0; i < size2*2 ; i++ ) { // did size2*2 coz - thats the number of elements that will be appended in arr3 ( number of elements in the smaller array)*2
        
        for ( int j = current2  ; j < size2 ; j ++ ){
            
            if ( arr1[current1] < arr2[current2] ) {
                arr3[i] = arr1[current1];
                current1++ ;
                cout<<"current1 = "<<current1<<endl;
                break;
            }
            else if ( arr1[current1] > arr2[current2]  ) {
                arr3[i] = arr2[current2];
                current2++ ;
                cout<<"current2 = "<<current2<<endl;
                break;
            }
        }
        current3++ ;
        cout<<"current3 = "<<current3<<endl;

    }
    
    for (int i = 0; i < n; i ++ ){
        cout<<i<<" - ";
        cout<<arr3[i]<<endl;
    }
    
    
    cout<<"the other loop"<<endl;
    
    if ( size1 > size2 ){
        while(current1 < size1 ){
            arr3[current3] = arr1[current1];
            current1++ ;
            current3++ ;
            cout<<"current1 = "<<current1<<endl;
            cout<<"current3 = "<<current3<<endl;
            cout<<"arr3[current3] = "<<arr3[current3]<<endl;
        }
    }
    else if ( size1 < size2 ){
        while(current2 < size2 ){
            arr3[current3] = arr2[current2];
            current2++ ;
            current3++ ;
            cout<<"current2 = "<<current2<<endl;
            cout<<"current3 = "<<current3<<endl;
        }
    }
    
    for (int i = 0; i < n; i ++ ){
        cout<<i<<" - ";
        cout<<arr3[i]<<endl;
    }
    



    return 0;
}
