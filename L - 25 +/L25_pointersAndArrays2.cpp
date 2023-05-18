#include <iostream>
using namespace std;

int main()
{

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    
    int *ptr = &arr[0];
    
    cout<<"ptr = "<<ptr<<endl; // 0x7ffcccebffa0
    cout<<"val = "<<*ptr<<endl; // 1
    
    ptr = ptr + 1;
    
    cout<<"new ptr = "<<ptr<<endl;  // 0x7ffcccebffa4
    cout<<"new val = "<<*ptr<<endl;  // 2
    
    arr = arr + 1  //-- it'll give ERROR - array type 'int[10]' is not assignable - kyu hi hoga , he got his own array to take care of (arr naam hai bhai uss array ka )  aage badh k kaha jaayega ?? arr[1] ???? naa naa..
    //cout<<arr<<endl;


    return 0;
}

