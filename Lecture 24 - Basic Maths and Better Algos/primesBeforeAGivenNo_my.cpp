#include <iostream>
using namespace std;
#include<vector>


bool isPrime(int p){

    if ( p < 2 ){
        return false;
    }
    
    bool check = true;
    
    for (int i =2; i  < p; i++ ){
        //cout<<"inside the loop - "<<i<<endl;
        if ( p%i == 0 ) {
            //cout<<"inside the if - "<<i<<endl;
            check = false;
            //cout<<"check = "<<check<<endl;
            break;
        }
        
    }
    return check;
}



int main() {
  
    // ques - given a num - n , print how many prime numbers exist before it ? 

    
    int n = 500;
    int count = 0;
    
    for ( int i = 2 ; i < n; i ++ ){       //(my )   - BAD CODE - will give TLE
        if ( isPrime(i) ) {
            //cout<<"found prime at i = "<<i<<endl;
            count ++;
            //cout<<"count = "<<count<<endl;
            //cout<<" i = "<<i<<endl;
        }
    }
    
    cout<<"final count = "<<count<<endl;

    return 0;
}
