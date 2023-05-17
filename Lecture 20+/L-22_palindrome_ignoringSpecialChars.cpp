#include <iostream>
using namespace std;

char lowerCase(char ch ){
    if (ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{
        return (ch -'A' + 'a');
    }
}

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
        cout<<"s = "<<s<<endl;
        cout<<"e = "<<e<<endl;
        if (arr1[s] < (char)48 || ( arr1[s] > 57 && arr1[s] < 65) || ( arr1[s] > 90 && arr1[s] < 97) || arr1[s] > 122  ) {
            
            cout<<"special char"<<endl;
            s++;
            e--;
            //continue;
        }
        if ( lowerCase(arr1[s]) != lowerCase(arr1[e])){
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
    
    char name[20] = "ab c4@ ko @4c ba";
    //char copy[20] = "lol";  // copy using loop later // did this to save time
    
    int s1 = getLength(name);

    //bool ans = palindrome(name,s1);
    //cout<<"ans = "<<endl;
    if (palindrome(name,s1)){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }

    return 0;
}
