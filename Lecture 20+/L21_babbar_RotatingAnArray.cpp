#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {1,7,9,11};
    
    int arr[] = {1,7,9,11}; // making a copy to use later
    
    int s = sizeof(arr1)/sizeof(int);
    int k = 2; //hinge to be rotated about
    
    for(int i =0; i < s; i++ ){
        arr1[ (k+i)%s ] = arr[i];  // mod operator handles everything here
    }


    cout<<"out"<<endl;
    
    for (int i = 0; i < s ; i++ ){
        cout<<arr1[i]<<endl;
        //cout<<"?"<<endl;
    }

    return 0;
}
