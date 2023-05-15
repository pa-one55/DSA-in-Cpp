#include <iostream>
using namespace std;

int main()
{
    int arr1[5] = {6,2,8,4,10};
    // sort this array using bubble  sort
    
    // bubble sort -> har round me ek element sort hota jaata hai ( end se ), i.e -> the max element

    for (int i = 0 ; i < 4; i ++ ){
        for (int j = 0 ; j < 4 - i; j ++ ){
            if ( arr1[j] > arr1[j + 1] ){
                swap(arr1[j], arr1[j+1]);
            }
        }
    }

    for (int i = 0; i<5 ; i++){
        cout<<arr1[i]<<endl;
        //cout<<"lol"<<endl;
    }



    return 0;
}
