#include <iostream>
using namespace std;
#include<string>

int main()
{
    // remove all occurances - leet code - 1910

    string s = "abcddefabcoplbc";
    string s2 = "abc";
    
    while (s.length() != 0 && s.find(s2) < s.length() ){ //  ( s.length() != 0 ) mtlb - string khatam nhi hui abgi tak or  ( s.find(s2) < s.length() ) ka mtlb ki loop me tab hi jaana jab s2 present ho s1 me or wo index jaha s2 hai wo s k length se chhota hona chahiye
        s.erase(s.find(s2), s2.length() ); // deleting s2 from s1
    }
    cout<<"s = "<<s<<endl;


    return 0;
}
