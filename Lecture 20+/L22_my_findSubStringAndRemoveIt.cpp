#include <iostream>
using namespace std;
#include<string>

int main()
{
    // remove a given sub string from a given string
    // to remove all occurances repeat this process
    
    string str1 = "abcdefgh";
    string str2 = "h";
    string str3;
    
    int s1 = str1.length();
    int s2 = str2.length();
    int start = -1; // go down and read the comment why its set to -1
    int end = -1;
    bool check = true;
    
    
    
    for (int i = 0; i < s1; i++ ){
        if( str1[i] == str2[0] ){  // initial match found
            //cout<<"initial match found at i = "<<i<<endl;
            for (int j = 0; j < s2; j++ ){  // to find rest of the matches
                // cout<<"checking other matches for j = "<<j<<endl;
                // cout<<"str1[i+j] = "<<str1[i+j]<<endl;
                // cout<<"str2[j] = "<<str2[j]<<endl;
                if( str1[i+j] != str2[j] ){
                    check = false;
                }
            }
            if (check){
                start = i;
                end = i + s2 - 1;
            }
        }
    }
    
    cout<<"start = "<<start<<endl;
    cout<<"end = "<<end<<endl;
    
    // add a base case for start = 0  and end = 0 qki  even if s2 = akl , "a" gets removed
    // nvm - got handeled by setting start = -1 and end = -1
    
    for (int i = 0; i < s1; i++ ){
        if ( i < start ){
            //push
            str3.push_back(str1[i]);
        }
        if (i > end ){
            //push
            str3.push_back(str1[i]);
        }
    }
    
    cout<<str3<<endl;



    return 0;
}
