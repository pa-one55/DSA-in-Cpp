
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

bool palindrome(char arr1[], int l){
    cout<<"in"<<endl;
    bool result = true;
    int s = 0;
    int e = l-1;
    while(s < e){
        if ( arr1[s] != arr1[e]){
            result = false;
            break;
        }
        s++;
        e--;
    }
    cout<<"out"<<endl;
    return result;
}

int main()
{
    // reverse a string
    
    char name[20] = "malayalam";
    //char copy[20] = "lol";  // copy using loop later // did this to save time
    
    int s1 = getLength(name);

    //bool ans = palindrome(name,s1);
    //cout<<"ans = "<<endl;
    if (palindrome(name,s1)){
        cout<<"pal"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    

    return 0;
}

