#include <iostream>
using namespace std;

int main()
{
    // ternary operator - both codes are same
    
    int a = 7;
    int b  =8;
    
    int ans;
    
    if (a>b ){
        ans = a;
    }
    else{
        ans = b;
    }
    
    cout<<ans;

    return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     // ternary operator
    
//     int a = 7;
//     int b  =8;
    
//     int ans;
    
//     ans = (a>b) ? a:b;   // if (true) ans = a, if(false) ans = b
    
//     cout<<ans;

//     return 0;
// }
