#include <iostream>
using namespace std;

int main()
{
    int r = 3;
    int c = 3;
    int arr[r][c];
    
    cout<<"Enter the elements"<<endl;
    
    for ( int i = 0; i < r; i++ ){
        for ( int j = 0; j<c; j++ ){
            cin>>arr[i][j];
        }
    }
    
    cout<<"printing the array"<<endl;
    for ( int i = 0; i < r; i++ ){
        for ( int j = 0; j<c; j++ ){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

// printing sum - row wise
    cout<<"printing sum"<<endl;
    int sum3 = 0;
    for ( int i = 0; i < r; i++ ){
        for ( int j = 0; j < c; j++ ){
            sum3 += arr[i][j];
        }
        cout<<"sum for row "<<i<<" = "<<sum3<<endl;
        sum3 = 0;
    }
    
    
// printing largest sum - row wise
    int sum = -9999999;
    int sum2 = 0;
    int index = -1;
    
    for ( int i = 0; i < r; i++ ){
        for ( int j = 0; j < c; j++ ){
            sum2 += arr[i][j];
        }
        if ( sum2 > sum ){
            sum = sum2;
            index = i;
        }
        sum2 = 0;
    }
    cout<<"sum = "<<sum<<" and index = "<<index<<endl;
    return 0;
}
