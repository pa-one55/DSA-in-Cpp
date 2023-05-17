#include <iostream>
using namespace std;
#include<vector>
int getLength(char arr[] ){
    int len = 0;
    //int i = 0;
    while( arr[len] != '\0'){
        len++;
    }
    return len;
}

int main()
{
    
    char name[20];
    
    cout<<"enter your name - ";
    cin>>name;
    cout<<endl;
    
    cout<<"your name is - "<<name<<endl;
    cout<<name[1]<<endl;
    cout<<getLength(name);
    return 0;
}
