#include <iostream>
using namespace std;

void sayDigit(int n, string arr[] ) {
    
    //base 
    if(n== 0 ){
        return;
    }
    
    int digit = n%10;
    n = n/10;
    
    //cout<<"check 1"<<endl;
    // cout<<arr[digit]<<endl;  // ye print ho jayega next call se pahle hi, so it'll print reverse
    //cout<<"check 2"<<endl;
    
    sayDigit(n,arr);
    //cout<<"check 3"<<endl;// yaha pe execution sabse end me aata hai so yaha print karo
    cout<<arr[digit]<<" ";
}

int main()
{
    // 
    string arr[10] = {"zero", "one", "two","three","four","five","six","seven","eight","nine"};  ///////
    int n = 923;
    
    sayDigit(n, arr);
    return 0;
}
