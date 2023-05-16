#include <iostream>
using namespace std;
#include<vector>

int main()
{
    vector<int> arr1 = {1,2,3,4,5,6,7,8,9};
    int k = 2;
    
    int s = sizeof(arr1) / sizeof(int);
    
    vector<int> arr2 = {};
    vector<int> arr3 = {};
    
    for (int jj = 0; jj < s; jj ++ ){
        arr2[jj] = arr1[jj];
    }
    

    cout<<"print arr2[]"<<endl;
    
    for ( int z = 0; z < s; z++ ){
        cout<<arr2[z]<<" ";
    }
    cout<<endl;
    
    cout<<"print arr3[]"<<endl;
    
    for ( int z = 0; z < s; z++ ){
        cout<<arr3[z]<<" ";
    }
    cout<<endl;
    
    // loop - 1
    int i = 0;
    cout<<" start "<<endl;
    while( ( k + i ) < s ) {
        arr1[ k + i ] = arr2[i];
        cout<<" i = "<<i<<endl;
        cout<<"arr2["<<i<<"] = "<<arr2[i]<<endl;
        cout<<"arr1["<<(k+i)<<"] = "<<arr1[k+i]<<endl;
        i++;
    }
    
    int j = 0;
    
    while( ( k + i - s ) < k ){
        arr1[ k + i - s  ] = arr2[s - k + j ];
        cout<<"s - k + j = "<<(s - k + j)<<endl;
        cout<<"arr2["<<(s - k + j)<<"] = "<<arr2[s - k + j ]<<endl;
        cout<<"arr1[ k + i - s  ] = "<<arr1[ k + i - s  ]<<endl;
        i++;
        j++;
        cout<<j<<endl;
    }
    
    for ( int l = 0; l < s; l++ ){
        cout<<arr1[l]<<" ";
    }



    return 0;
}
