#include <iostream>
using namespace std;

int stairs(int n){
    
    if(n == 0 ){
        return 1;
    }
    
    if (n < 0 ){
        return 0 ;
    }
    
    int Tn = stairs(n-1) + stairs(n-2);  // since Tn = T(n-1) + T(n-2) -- mtlb ya to aap just ek niche waale stair se ek step leke aaye ho yaa to app 2 niche waale sidhi se 2 step jump kar k aaye ho
    return Tn;
    

    // return ans;
}


int main()
{
    // cout<<"Hello World";
    
    
    int n = 7;

    int ways = stairs(n);
    cout<<"ways = "<<ways<<endl;


    return 0;
}
