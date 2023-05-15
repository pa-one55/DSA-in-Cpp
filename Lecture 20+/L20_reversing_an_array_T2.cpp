#include <iostream>
using namespace std;
int main()
{
    int arr1[] = {333,115,992,454,101};
    int arr2[] = {};
    int L = sizeof(arr1) / sizeof(int);
    // swap(arr1[2],arr1[2]);
    // cout<<arr1[2]<<endl;
    // cout<<arr1[2]<<endl;
    int lol;
    if (L%2 == 1 ){
        lol = (L-1)/2;
    }
    else{
        lol = L/2;
    }
    cout<<"lol = "<<lol<<endl;
    for (int i = 0; i < lol ; i++ ){
        swap(arr1[i],arr1[L - 1 - i]);
    }
    
    for (int i = 0; i < L; i++) {
        cout<<arr1[i]<<endl;
    }

    return 0;
}
