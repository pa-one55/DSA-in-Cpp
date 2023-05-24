#include <iostream>
using namespace std;

int main() {

    // 2D Array in Heap - Dynamic Memory Allocation
    int row = 3;
    int col = 4;
    
    int ** a = new int*[row];
    
    for (int i = 0; i<row; i++ ){ // number of rows 
        a[i] = new int [col]; // col - denotes - cells in a row
    }
    
    // take input and process
    for(int i =0; i<row; i++ ){
        for(int j = 0; j<col; j++ ){
            cin>>a[i][j];
            a[i][j] ++;  // adding one to each element
        }
    }
    
    // printing the array
    cout<<"printing the array"<<endl;
    for(int i =0; i<row; i++ ){
        for(int j = 0; j<col; j++ ){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    // delete the array to release the heap memory
    for(int i = 0; i<row; i++ ){  // first delete the "one row" arrays 
        delete[] a[i];              // otherwise it'll lead to memory leak
    }
    delete[] a; // then delete the "a"
    
    return 0;
}

// #include <iostream>
// using namespace std;

// int main() {

//     // 2D Array in Heap
//     int row = 3;
//     int col = 4;
    
//     // we need to create a 2D Array in Heap
//     // first we will create a row array which will store the address of the other row arrays that we'll create
//     // then we'll create those other row arrays
    
//     // creating the row array to store addresses
    
//     int** arr = new int*[row];  //  here we'll give "row" beause this array is a "one column" vertical arrays
//                               // which denotes the number of rows that we'll need in our final arrays
    
//     // now, creating the row num of "one row" arrays
//     for(int i =0 ; i<row; i++ ){
//         arr[i] = new int[col]; // storing the address of the new "one row" array
//     }
    
//     // take input
    
//     for(int i =0; i<row; i++ ){
//         for(int j = 0; j<col; j++ ){
//             cin>>arr[i][j];
//             arr[i][j] = arr[i][j]*arr[i][j];
//         }
//     }
    
//     // printing the array
    
//     cout<<"printing squares"<<endl;
//     for(int i =0; i<row; i++ ){
//         for(int j = 0; j<col; j++ ){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    
//     // deleting the array first we'll delete the inner arrays then the outer one
    
//     for(int i = 0; i< row; i++ ){
//         delete[] arr[i];
//     }
    
//     delete[] arr;
    

    
//     return 0;
// }



