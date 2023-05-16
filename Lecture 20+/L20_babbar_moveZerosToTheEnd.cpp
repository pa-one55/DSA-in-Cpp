#include <iostream>
using namespace std;

int main()
{
    // ques - shift all zeros to the right
    int arr1[] = {0,1,0,3,0,0,0,0,0,12};
    
    int s = sizeof(arr1)/sizeof(int);
    int nonZero = 0; // hume starting k places pe non zero elements laane hain
    // our mindset shift all non zero elements to the left
    for(int i = 0; i<s; i++ ){
        if(arr1[i] != 0 ){
            swap(arr1[i],arr1[nonZero]);  // jaise hi non zero element mile swap kar do - aise hi humare array k starting k places pe non zero elements aate jaayenge..
            nonZero++;
        }
    }
    
    cout<<"out"<<endl;
    
    for (int i = 0; i < s ; i++ ){
        cout<<arr1[i]<<endl;
    }

    return 0;
}
