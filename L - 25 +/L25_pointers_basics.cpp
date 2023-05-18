#include <iostream>
using namespace std;



int main()
{
    //cout<<"Hello...";
    int *p;  // never do this - this will store a garbage address value and that can be somewhere you wouldn't like to go
    // instaed do this
    int *l = 0; // null pointer
    // and can later do this
    int i = 8;
    l = &i;
    
    int j = *l;
    cout<<"l = "<<l<<endl;  // 0x7ffe2d91dd84
    cout<<"i = "<<i<<endl;  // 8
    cout<<"j = "<<j<<endl;  // 8
    j +=1;
    cout<<"new j = "<<j<<endl;  // 9 
    cout<<"new i = "<<i<<endl; // here i = 8, "i" wont change coz j is just a copy, thats independent
    int *q = l; // creating (copying ) a pointer q that will point to ( not store ) l
    cout<<"q = "<<q<<endl;  //0x7ffe2d91dd84
    cout<<"*q = "<<*q<<endl;  // 8
    *q += 1; // adding 1 in the value that is stored at the addrress stored in q - i will change
    cout<<"new *q = "<<*q<<endl;  // 9
    cout<<"new i = "<<i<<endl;   // 9

    int m = 4;
    int* pp = &m;   // same as int *pp = &m; no difference
    cout<<"m = "<<m<<endl;     // 4
    cout<<"pp = "<<pp<<endl;  // 0x7ffe2d91dd88
    cout<<"*pp = "<<*pp<<endl; // 4

    return 0;
}





