#include <iostream>
using namespace std;

int stairs(int n){
    
    if(n == 0 ){
        return 0;
    }
    
    if (n == 1 ){
        return 1;
    }
    
    int Tn = stairs(n-1) + stairs(n-2);  // since Tn = T(n-1) + T(n-2) -- found this pattern manually
    return Tn;
    

    // return ans;
}


int main()
{
    // cout<<"Hello World";
    // my
    
    
    int n = 7;

    int ways = stairs(n);
    cout<<"ways = "<<ways<<endl;


    return 0;
}
