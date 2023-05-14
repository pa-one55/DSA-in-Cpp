#include <iostream>
using namespace std;

void intersection(int arr1[], int arr2[], int size1, int size2){
  
  int i= 0;
  int j = 0;
  
  while(i<size1 && j<size2){
    int element = arr1[i];
    
    if (arr1[i] == arr2[j]){
      cout<<"intersection - "<<arr1[i]<<endl;;
      i++;
      j++;
  
    }
    else if(arr1[i] > arr2[j]){
      j++;
    }
    else if(arr1[i] < arr2[j]){
      i++;
    }
  }
}

int main() {
  
  cout<<"T - 3  ( babbar )\n";
  
  int s1 =5;
  int s2 = 4;
  int arr1[s1] = {1,2,2,3,4};
  int arr2[s2] = {2,2,3,3};
  
  intersection(arr1, arr2, s1,s2);
  
  return 0;
}
