#include <iostream>
using namespace std;

bool isPrime(int p){

    if ( p < 2 ){
        return false;
    }
    
    bool check = true;
    
    for (int i =2; i  < p; i++ ){
        cout<<"inside the loop - "<<i<<endl;
        if ( p%i == 0 ) {
            cout<<"inside the if - "<<i<<endl;
            check = false;
            cout<<"check = "<<check<<endl;
            break;
        }
        
    }
    return check;
}


int main()
{
  
    cout<<isPrime(0);
    
    return 0;
}
