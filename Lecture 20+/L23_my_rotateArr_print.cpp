#include <iostream>
using namespace std;

int main()
{
    // rotating an array by 90 degrees - just printing 
    
    int r = 5;
    int c = 5;
    int arr[5][5] ={ {1,2,3,4,5},
                     {6,7,8,9,10},
                     {11,12,13,14,15},
                     {16,17,18,19,20},
                     {21,22,23,24,25} };
    
// printing in original order
    cout<<"normal"<<endl;
    for(int i = 0; i < r; i++ ){
        for(int j = 0; j < c; j++ ){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

// rotated

    cout<<"rotated"<<endl;
    int count = 0;
    int total = r*c;
    int j = 0;  // j - represents column
    while ( count < total ){ 
        for (int i = c - 1 ; i >= 0 ; i-- ){
            cout<<arr[i][j]<<" ";
            count++;
        }
        j++;
        cout<<endl;
    }


    return 0;
}
