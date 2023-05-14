#include <iostream>
using namespace std;


int duplicate(int arr[], int size){
  int ans = 0;
  
  for(int i = 0; i<size; i++){
    ans = ans^arr[i];
  }
  for(int i = 0; i<size; i++){
    ans = ans^i;
  }
  return ans;
}



int main() {
  
  cout<<"T - 3, babbar\n";
  int s = 8; 
  int arr1[s] = {1,2,3,4,5,6,6,7};
  int lol = duplicate(arr1, s);
  cout<<"The duplicate element is "<<lol;
  return 0;
}