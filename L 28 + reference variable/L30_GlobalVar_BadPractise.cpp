#include <iostream>
using namespace std;

int glbl = 99;

int update( int& i){  // passing as reference variable
    i-- ;
    //cout<<glbl<<endl;
    return i;
}

int main()
{
    //global variable - bad practise - because any function can change it
    cout<<glbl<<endl; // - 99
    
    update(glbl);
    cout<<glbl<<endl;  // - 98 
    
    glbl--;
    cout<<glbl<<endl;  // 97
    

    return 0;
}
