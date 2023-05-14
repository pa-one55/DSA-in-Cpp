#include <iostream>
using namespace std;

void selectionSort(int arr1[], int size){
  for(int i = 0; i<size; i++){
    int minIndex= i;
    
    for (int j = i+1; j<size; j++){
      if(arr1[j] < arr1[minIndex]){
        minIndex = j;
      }
    }
    swap(arr1[minIndex], arr1[i]);
  }
}

int main(){
  cout<<"MY \n";
  int s = 6;
  int arr1[s] = {5,8,4,9,2,7};
  selectionSort(arr1,s);
  for(int i = 0; i<s; i++){
    cout<<arr1[i]<<endl;
  }
  
  return 0;
}