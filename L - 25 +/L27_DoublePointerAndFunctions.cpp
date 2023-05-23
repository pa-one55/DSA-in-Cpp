#include <iostream>
using namespace std;

void update(int** p){
    //p =  p + 1;
    // kuchh change hoga ? - NO -  remember "kewal" base layer me change nhi hota, baaki me hoga
    // q ki yaha pass by value ho raha hota hai
    
    // *p = *p + 1;
    // kuchh change hoga ? - YES 
    // yaha hum address pe jaake changes kar rahe hain to obv. changes hoga
    
    // **p = **p + 1;
    // kuchh change hoga ? - YES
    // same as above
}


int main()
{   
    
    // Functions and Double pointers

    int var = 10;
    int* ptr1 = &var;
    int** ptr2 = &ptr1;
    
    cout<<"Before"<<endl;
    cout<<var<<endl;
    cout<<ptr1<<endl;
    cout<<ptr2<<endl;
    
    update(ptr2);
    
    cout<<"after"<<endl;
    cout<<var<<endl;
    cout<<ptr1<<endl;
    cout<<ptr2<<endl;

    return 0;
}


