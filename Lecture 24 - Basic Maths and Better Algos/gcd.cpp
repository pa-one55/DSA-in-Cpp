#include <iostream>
using namespace std;


int main(){
    
    // bad algo
    // Find Minimum of a and b
    int result = ((a < b) ? a : b);
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }

//     Euclidean algorithm for GCD of two numbers:
// The idea of this algorithm is, the GCD of two numbers doesn’t change if the smaller number is subtracted from the bigger number. This is the Euclidean algorithm by subtraction. It is a process of repeat subtraction, carrying the result forward each time until the result is equal to any one number being subtracted.

    


}


