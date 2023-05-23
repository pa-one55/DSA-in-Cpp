#include <iostream>
using namespace std;

int counting(int n ){
    
    // base case
    if (n == 0) {
        // cout<<1<<endl;
        return ;
    }
    
    else{  // recursive relation
        int smallerProblem = counting(n-1);
        int biggerProblem = 1 + smallerProblem;  
        cout<<biggerProblem<<endl;   // our recursive relation is --> Tn = 1 + T(n-1)
        return biggerProblem;          // where tn is the n-th term
    }
}

int main()
{
    int n = 10;
    counting(n);

    return 0;
}
