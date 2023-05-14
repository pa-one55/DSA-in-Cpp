#include <iostream>
using namespace std;

int arrSum(int arr[], int size){
  int sum2 = 0;
  for (int i = 0; i<size; i++){
    sum2 = sum2 + arr[i];
  }
  cout<<"sum2  = "<<sum2<<endl;
  return sum2;
}

int main() {
  
  cout<<"Tech - 2"<<endl;
  
  int s = 5;
  int arr1[s] = {1,2,4,3,4};
  
  int prod = s*(s-1);
  int sum1 = prod/2;
  cout<<"sum1  = "<<sum1<<endl;
  int sum2 = arrSum(arr1,s);
  int diff = sum2 - sum1;
  
  cout<<"The duplicate element is "<<diff;
  return 0;
}
