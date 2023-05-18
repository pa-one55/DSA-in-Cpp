#include <iostream>
using namespace std;

int main()
{

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    char ch[6] = "abcde";
    char chr = 'z';
    
    int *p1 = &arr[0];
    char *p2 = &ch[0];
    char *p3 = &chr;
    
    cout<<"p1 = "<<p1<<endl;  // 0x7ffe04254ac0 - prints the address
    cout<<"p2 = "<<p2<<endl;  // abcde  - prints the content 
    cout<<"p3 = "<<p3<<endl;  // z�J%�     z�7J     z`�U.             ..
    //this mf keeps printing untill it gets a null char 

    //char *c = "dfgh";  // danger practice never do this because *c can be address of an unwanted place
    //cout<<c<<endl;
    cout<<"running..";


    return 0;
}
