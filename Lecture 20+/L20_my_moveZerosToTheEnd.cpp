#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {0,1,0,3,4,5,0,0,0,8,0,0,12,0,0};
    
    int s = sizeof(arr1)/sizeof(int);
    int k = 0; // to count how many places have been filled in the array
    
    for ( int i = 0; i < s-1; i++ ){
        if(arr1[i] == 0 && arr1[i + 1] != 0 ){
            //cout<<"i = "<<i<<endl;
            for( int j = i+1; j > k; j-- ){ // j = i + 1 kiya q ki hum "if statement me i or i+1 compare kr rahe hain to humaara j dusra waala element hoga i.e. i + 1"
                //cout<<"swapping"<<endl;
                swap(arr1[j], arr1[j-1]);
            }
            k++;
        }
    }
    
    cout<<"out"<<endl;
    
    for (int i = 0; i < s ; i++ ){
        cout<<arr1[i]<<endl;
        //cout<<"?"<<endl;
    }

    return 0;
}
