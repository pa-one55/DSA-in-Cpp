#include <iostream>
using namespace std;

void pairSum(int arr1[], int size, int sum1){
  
  int el1;
  int el2;
  int j=0;
  
  for(int i = 0; i<size; i++){
    el1 = arr1[i];
    
    for(int j = i+1; j<size; j++){
      el2 = arr1[j];
      for(int k = j+1; k<size; k++){
        int el3 = arr1[k];
        int sum2 = el1 + el2 + el3;
        if (sum1 == sum2){
          cout<<el1<<" "<<el2<<" "<<el3<<endl;
          break;
        }
      }
    }
  }
}


int main() {
  
  cout<<"T - 1  ( my )\n";

  
  int s1 =5;
  int arr1[s1] = {1,2,3,4,5};
  int sum = 12;
  
  pairSum(arr1, s1, sum );

  
  return 0;
}
