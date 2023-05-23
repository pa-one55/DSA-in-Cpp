#include <iostream>
using namespace std;


int main()
{   // Double pointers

    int var = 10;
    int* ptr1 = &var;
    int** ptr2 = &ptr1;
    
    cout<<var<<endl;       // - 10
    cout<<*ptr1<<endl;    //  - 10
    cout<<**ptr2<<endl;  //   - 10
    
    cout<<&var<<endl;     //- 0x7fff99e21084
    cout<<ptr1<<endl;    // - 0x7fff99e21084
    cout<<*ptr2<<endl;  //  - 0x7fff99e21084
    
    cout<<&ptr1<<endl;   // - 0x7fff99e21088
    cout<<ptr2<<endl;   //  - 0x7fff99e21088

    return 0;
}


