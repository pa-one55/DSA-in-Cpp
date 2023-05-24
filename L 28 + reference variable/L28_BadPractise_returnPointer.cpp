#include <iostream>
using namespace std;

int* func(int a ){  // (return type - reference int ) - very bad practise 
    // q ki - ye  saare local variables hain or  
    int* ans = &a;  // function run hone k baad sab erase ho jaayenge
    return ans;  
}

int main() {

    // Reference variable 

    int n = 9;
    cout<<func(n)<<endl;
    cout<<*func(n)<<endl;
    cout<<n<<endl;


    return 0;
}


