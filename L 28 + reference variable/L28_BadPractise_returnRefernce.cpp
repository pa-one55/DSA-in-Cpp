#include <iostream>
using namespace std;

int& func(int a ){  // (return type - reference int ) - very bad practise 
    int num = a;    // q ki - ye  saare local variables hain or  
    int& ans = num;  // function run hone k baad sab erase ho jaayenge
    return ans;  
}

int main() {

    // Reference variable 

    int n = 9;
    func(n);
    cout<<n<<endl;


    return 0;
}


