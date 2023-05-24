#include <iostream>
using namespace std;

inline int getMax(int a, int b ){
    return (a>b) ? a:b;
}

int main()
{
    // inline function
    
    int a = 7;
    int b  =8;
    int ans;
    ans = getMax(a,b);
    cout<<ans;

    return 0;
}
    // during compiling it becomes something like this

    // ans = (a>b) ? a:b
