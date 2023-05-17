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

void reverseArray(char arr1[],char arr2[], int s){
    int i = 0;
    while ( arr1[s-i-1] != '\0'){
        //code
        arr2[i] = arr1[s-i-1];
        i++;
        
    }
}
int main()
{
    // reverse a string
    
    char name[20] = "pawan";
    char reverse[20];
    
    int s1 = getLength(name);
    reverseArray(name, reverse,s1);
    cout<<reverse<<endl;
    return 0;
}
