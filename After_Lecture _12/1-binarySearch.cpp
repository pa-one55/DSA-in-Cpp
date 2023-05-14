#include <iostream>
using namespace std;

int binarySearch(int arr1[], int size, int key){
  
  int start = 0;
  int end = size;
  int index = -1;
  
  while(end >= start){
    int mid = ( start + end )/2;
    if (arr1[mid] == key){
      index = mid;
      break;
    }
    else if(arr1[mid] > key){
      end = mid - 1;
    }
    else if(arr1[mid] < key){
      start = mid + 1;
    }
  }
  return index;
}

int main(){
  int s = 6;
  int arr1[s] = {1,3,4,6,8,9};
  int key = 4;
  int index = binarySearch(arr1, s, key);
  if (index >= 0){
    cout<<key<<" is present at index  "<<index<<endl;
  }
  else if(index == -1){
    cout<<key<<" is not in the given list."<<endl;
  }
  
  return 0;
}