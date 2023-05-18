#include <iostream>
using namespace std;

int main()
{

    int arr[10] = {2,4,6,8,10,12,14,16,18,20};
    int *ptr = &arr[0];
    
    cout<<"  arr   -> "<<arr<<endl; // 0x7ffdc9b978d0 // the name stores the address of the 0th place
    cout<<"&arr[0] -> "<<&arr[0]<<endl;  // 0x7ffdc9b978d0 -  obv address
    cout<<"   ptr  -> "<<ptr<<endl;  // 0x7ffdc9b978d0 - address
    cout<<"   *arr -> "<<*arr<<endl;    //  2 - value at the address at arr
    cout<<"   *ptr -> "<<*ptr<<endl; // 2
    cout<<" arr[0] -> "<<arr[0]<<endl;  // 2
    
    // arr , &arr[0] , &arr   these all three are the same thing - address of the zeroth element
    
    
    // sizes 
    cout<<"sizeof(arr) = "<<sizeof(arr)<<endl;  // here arr is not a pointer but the array itself so the size will be 40 
    //explanation in notes and - https://stackoverflow.com/questions/32099990/why-sizes-of-an-array-and-a-pointer-to-a-first-element-are-different
    cout<<"sizeof(ptr) = "<<sizeof(ptr)<<endl; // a pointer is of size 8 bytes
    //but
    cout<<"size(arr+1) = "<<sizeof(arr+1)<<endl;     // here arr is converted to a pointer - 8
    cout<<"sizeof(*ptr) = "<<sizeof(*ptr)<<endl;    // *ptr means a value and that is an int so - 4 bytes
    cout<<"sizeof(*arr) = "<<sizeof(*arr)<<endl;   // *arr means arr[0] and that's an int so  - 4
    cout<<"sizeof(&arr) = "<<sizeof(&arr)<<endl;  // address so  - 8
    
    ptr += 1; // adding 1 to address maeans going to the next memory block and that is arr[1]
    cout<<"new ptr = "<<ptr<<endl; // 0x7ffdc9b978d4
    cout<<"new *ptr = "<<*ptr<<endl;   // 4
    cout<<"arr[1] = "<<arr[1]<<endl;   // 4
    
    *ptr += 1;  // adding 1 to the value stored at the address stored in ptr and that is the value at arr[1]
    cout<<"newww ptr = "<<ptr<<endl;   // 0x7ffdc9b978d4
    cout<<"newww *ptr = "<<*ptr<<endl;  // 5
    cout<<"arr[1] = "<<arr[1]<<endl;    // 5
    
    ptr +=1; // going to the next block  that is arr[2]
    cout<<"val = "<<*ptr<<endl;  // 6

    ptr += 1; // again next block that is arr[3]
    // so we get this formula
    // arr[i] = *(arr + i)     // remember "arr" stores an address means its a pointer thats why we are dereferencing it
    // means we can do this - i[arr] = *( i + arr )     -  this is valid , won't give any error


    return 0;
}
