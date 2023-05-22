#include <iostream>
using namespace std;

int main()
{
    // print an array in wave form - i.e - up-down up-down
    int r = 3;
    int c = 3;
    int arr[3][3] ={ 1,2,3,
                     4,5,6,
                     7,8,9 };
    
// printing in original order
    for(int i = 0; i < r; i++ ){
        for(int j = 0; j < c; j++ ){
            cout<<arr[j][i]<<"-";
        }
        cout<<endl;
    }

// wave
    cout<<"wave"<<endl;
    for (int i = 0; i<r; i ++ ){
        if ( i%2 == 0 ){
            for(int j = 0; j < c; j++ ){
                cout<<arr[i][j]<<" ";
            }
        }
        else {
            for(int k = c-1; k >= 0; k-- ){
                cout<<arr[i][k]<<" ";
            }
        }
    }

    return 0;
}
