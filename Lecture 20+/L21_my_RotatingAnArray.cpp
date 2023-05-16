#include <iostream>
using namespace std;

int main()
{
    // ques - rotate the given array about the given "k" - i.e. shift the elements in cyclic manner
    int arr1[] = {1,7,9,11};
    int k = 2; //hinge to be rotated about

    int arr[] = {1,7,9,11}; // making a copy to use later
    
    int s = sizeof(arr1)/sizeof(int);

    for(int i =0; i < s; i++ ){
        if(k+i < s ){
            arr1[k+i] = arr[i];
            //cout<<arr[i]<<endl;
        }
        else{
            arr1[k+i-s] = arr[s+i-k-2];
            //cout<<"index = "<<s+i-k-2<<endl;
            //cout<<"element = "<<arr[s+i-k-2]<<endl;
        }
    }

    for (int i = 0; i < s ; i++ ){
        cout<<arr1[i]<<endl;
    }

    return 0;
}
