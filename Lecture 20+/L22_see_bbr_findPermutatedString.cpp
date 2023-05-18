#include <iostream>
using namespace std;
#include<string>

bool checkEqual( int s1[26], int s2[26] ){ // comparing both count arrays, i.e. - comparing if both substrings contain the same num of each char. thats how we can compare permutation
    for ( int i = 0; i< 26; i++ ){
        if(s1[i] != s2[i]){
            return 0;
        }
    }
    return 1;
}


int main()
{
    //return true if any permutation of s1 is present in s2
    // else return false
    // leet code - 567 - permutation in string
    
    
    string s1 = "asjhbardb";
    string s2 = "kjhgbardbasjhiuytfgcvb";
    
    int count1[26] =  {0};
    // to store the count of each char present in s2 inside count1
    for(int i = 0; i < s1.length(); i++ ){
        int index = s1[i] - 'a';
        count1[index]++ ;
    }
    
    //traverse s2 now
    int count2[26] = {0};
    int i = 0;
    int windowSize = s1.length();  // iss window me present saare char/elements k count store kr k compare kr lenge s1 k elements k count se
    
    // running first  window
    while( i < windowSize && i < s2.length() ){ // "i" must not exceed s2.length()
        int index = s2[i] - 'a';
        count2[index]++ ;
        i++;
    }
    
    // check First window
    //ye isliye kiya taaki pahli baar ek window k elements ka count store ho jaaye or next window se kewal ek ek aage badhana pade

    if (checkEqual(count1 , count2) ) {
        return 1; // returns true and program ends
        //cout<<1<<endl;
    }
    
    // check other windows - isme kewal ek ek badhana padega
    
    while( i < s2.length() ) {  // ye end tak jaayega
        char newChar = s2[i];  // pahle window k just ek baad waal element
        int index = newChar - 'a';
        count2[index]++ ; 
        
        char oldChar = s2[i - windowSize];
        index = oldChar - 'a';
        count2[index]-- ;  // pahle window k just ek pahle waal element -- usko delete kr kre hain, that is just ek count minus kr do

        i++;

        if ( checkEqual(count1, count2) ){  // checking for every window
            return 1;
        }
    }

    return 0;
}
  