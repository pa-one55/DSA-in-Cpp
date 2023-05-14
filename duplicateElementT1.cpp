#include <iostream>
using namespace std;

int findUnique(int arr[], int size){
  int count = 0;
  int index;
  int element;

  for(int i = 0; i<size; i++){
    element = arr[i];
    for (int j=0; j<size; j++){
      if (arr[j] == element){
        count ++;
      }
    }
    //cout<<"count for i = "<<i<<" is "<<count<<endl;
    if (count == 2){
      index = i;
      break;
    }
    count = 0;
  }
  return index;
  
}

int main() {
  
  cout<<"Tech - 1"<<endl;
  
  int s = 5;
  int arr1[s] = {1,2,4,3,4};
  int index = findUnique(arr1, s);
  //cout<<index;
  cout<<"The duplicate element is "<<arr1[index];
  return 0;
}
