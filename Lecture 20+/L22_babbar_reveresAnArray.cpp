#include <iostream>
using namespace std;

int getLength(char arr[] ){
    int len = 0;
    //int i = 0;
    while( arr[len] != '\0'){
        len++;
    }
    return len;
}

void reverseArray(char arr[], int l){
    int s = 0;
    int e = l-1;
    while ( s<e){
        //code
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
int main()
{
    // reverse a string
    
    char name[20] = "abcdefg";
    char reverse[20];
    
    int s1 = getLength(name);
    reverseArray(name,s1);
    cout<<name<<endl;
    return 0;
}
