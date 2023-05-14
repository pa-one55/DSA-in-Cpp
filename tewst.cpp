#include <iostream>
using namespace std;


int noOfDiff(int size) {
  int sum = 0;
  while(sum <= size){
    int i = 0;
    sum = sum + i;
    i++;
  }
  cout<<sum;
}



int main() {
  
  int arr1[7] = {3,7,5,9,7,5,3};
  //findUnique(arr1, 7);
  int size = 3;
  noOfDiff(size);
  return 0;
}
