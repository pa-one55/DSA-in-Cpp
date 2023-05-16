#include <iostream>
using namespace std;

int main() {
    
    int a = 2;
    int b =9;
    int r = 1;
    
    while ( b > 0 ){
        //code
        if ( b%2 == 1 ){
            //cout<<"odd"<<endl;
            r = r*a;
            //cout<<"r = "<<r<<endl;
        }
        a = a*a;
        //cout<<"a = "<<a<<endl;
        b = b/2;
        //cout<<"b = "<<b<<endl;
        
    }

    cout<<"a^b = "<<r<<endl;



    return 0;
}
