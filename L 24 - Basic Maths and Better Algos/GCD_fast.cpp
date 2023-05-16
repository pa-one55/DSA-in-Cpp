#include <iostream>
using namespace std;
#include<vector>

int gcd(int a, int b){
    //code

//     Euclidean algorithm for GCD of two numbers:
// The idea of this algorithm is, the GCD of two numbers doesn’t change if the smaller number is subtracted from the bigger number. This is the Euclidean algorithm by subtraction. It is a process of repeat subtraction, carrying the result forward each time until the result is equal to any one number being subtracted.



    if ( a == 0 ){
        return b;
    }
    
    if ( b == 0 ){
        return a;
    }
    
    while( a != b ){
        if (a > b ){
            a = a - b;
        }
        else {
            b = b - a;
        }
    }
    return a;
    
}

int main() {
  
    int a = 12;
    int b = 25;
    // theorem - gcd(a,b) = gcd(a-b, b)

    cout<<gcd(a,b)<<endl;



    return 0;
}
