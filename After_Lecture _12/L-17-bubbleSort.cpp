#include <iostream>
using namespace std;

void bubbleSort(int arr1[], int n){
  for(int i = 0; i<n; i++){
    for(int j=0; j<n-1-i; j++){
      if (arr1[j] > arr1[j+1]){
        swap(arr1[j], arr1[j+1]);
      }
    }
  }
}

int main(){
  cout<<"MY \n";
  int s = 6;
  int arr1[s] = {5,8,4,9,2,7};
  bubbleSort(arr1,s);
  for(int i = 0; i<s; i++){
    cout<<arr1[i]<<endl;
  }
  
  return 0;
}