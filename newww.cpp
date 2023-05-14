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
    if (count == 1){
      index = i;
    }
    count = 0;
  }
  return index;
  
}

int main() {
  
  int arr1[7] = {3,7,5,8,7,5,3};
  int index = findUnique(arr1, 7);
  //cout<<index;
  cout<<"The unique element is "<<arr1[index];
  return 0;
}
