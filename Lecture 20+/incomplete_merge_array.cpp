#include <iostream>
using namespace std;

int main()
{
    int arr1[6] = {1,3,9,0,0};
    int arr2[3] = {2,5,12};
    
    int size1 = sizeof(arr1)/sizeof(int);
    int size2 = sizeof(arr2)/sizeof(int);

    int jj = size1;
    
    for(int i = 0; i < size2 ; i++ ){
        cout<<"loop 1 "<<endl;
        //loop 2
        for(int j = 0; j < size1 ; j++ ){
            cout<<"loop 2 "<<endl;
            if( arr2[i] < arr1[j]) { // then shift the array
                cout<<"inside if"<<endl;
                
                //int ii = j + 1;
                // array shifting code
                while( jj > j+1 ) {
                arr1[jj - 1] = arr1[jj - 2 ];
                cout<<"array shifting"<<endl;
                jj--;
                }
                arr1[j] = arr2[i];
                cout<<"updated"<<endl;
                cout<<"arr1["<<j<<"] = "<<arr1[j]<<endl;
                break;
            }
            else if ( j > ( size1 - size2 + i - 1 ) ){
                cout<<"entered else-if"<<endl;
                arr1[size1 - size2 + i ] = arr2[i];
                cout<<"updated"<<endl;
                cout<<"arr1["<<j<<"] = "<<arr1[j]<<endl;
                break;
            }
        }
    }
    
    
    
    
    for (int i = 0; i < size1 ; i++ ){
        cout<<arr1[i]<<endl;
    }

    return 0;
}
