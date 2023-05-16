#include <iostream>
using namespace std;
#include<vector>

int main() {
  
    // ques - given a num - n , print how many prime numbers exist before it ? 
    

    // PRIME NUMBER BETTER CODE - Sieve of Eratosthenes
    // explanation - we create an array[n+1] and make all the elements prime
    //  ( means we are assuming all the elements to be prime in the begining)
    // then we'll start from arr_given[i] and then check if its prime or not
    // then loop and mark all the multiples of arr_given[i] as not prime
    
    int n = 10;
    
    vector<bool> primeArr(n + 1,true);
    int count = 0;
    
    // base case
    primeArr[0] = primeArr[1] = false;
    
    for (int i = 2; i<n; i++){
        
        if ( primeArr[i] ){
            count++;
            
            for(int j = 2*i; j<n; j = j + i ){  // removing the multiples of "i" - i.e. - marking them as non-prime
                primeArr[j] = 0;
            }
        }
    }
    
    cout<<"final count = "<<count<<endl;
    

    return 0;
}
