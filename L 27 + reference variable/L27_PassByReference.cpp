#include <iostream>
using namespace std;

void update1(int n) {
    n++;
}

void update2(int& n) {
    n++;
}

int main() {
    
    // Reference variable 
    int i = 5;
    cout<<"before"<<endl;
    cout<<i<<endl;  // - 5
    
    update1(i);
    
    cout<<"after update1"<<endl;
    cout<<i<<endl;  // - 5  - becaues its being passed by value
    
    update2(i);
    
    cout<<"after update2"<<endl;
    cout<<i<<endl;  // - 6  - because its being passed as Reference



    return 0;
}


