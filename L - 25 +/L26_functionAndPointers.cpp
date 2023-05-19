#include <iostream>
using namespace std;

void update(int *p ){   //  this is how we take pointers in functions as arguement
    p = p + 1;
    cout<<"p inside = "<<p<<endl;
}
int main()
{   // FUNCTIONS AND POINTERS
    
    int n = 7;
    int *p = &n;
    
    cout<<"p before = "<<p<<endl;  // 0x7ffc21c567ec
    update(p);
    cout<<"p after  = "<<p<<endl;  // 0x7ffc21c567ec - wont change - function k help se pointer wont change
    // why ? -
    return 0;
}
