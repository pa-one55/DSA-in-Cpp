#include <iostream>
using namespace std;

int getSum(int arr[], int s) {
    int sum = 0; 
    cout<<"sizeof(arr) = "<<sizeof(arr)<<endl; 
    for (int i = 0; i < s; i++ ){
        //sum += arr[i];
        sum += i[arr];  // both are same
    }
    return sum;
}
int main()
{   // FUNCTIONS AND POINTERS
    int arr[6] = {1,2,3,4,5,6};
    int s = getSum(arr + 3,6);
    cout<<"sum = "<<s<<endl;


    return 0;
}


