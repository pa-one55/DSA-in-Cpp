#include <iostream>
using namespace std;

void removeEl(int arr1[], int size, int index){
  for (int i = index; i<size-1; i++){
    arr1[i] = arr1[i+1];
  }
}

void pairSum(int arr1[], int size, int sum1){
  int end = size;
  int index;
  
  for (int i = 0; i<end; i++){
    int elementI = arr1[i];
    
    for (int j = i+1; j<end; j++){
      
      int elementJ = arr1[j];
      int sum2 = elementI + elementJ;
      
      if (sum1 == sum2 && elementI >= elementJ ){
        cout<<elementI<<" "<<elementJ<<endl;
        index = i;
        //removeEl(arr1, size, index);removeEl is not needed because we are starting the second loop from (i+1)
        //end --;
        //i --;
        break;
      }
      if (sum1 == sum2 && elementI < elementJ ){
        cout<<elementJ<<" "<<elementI<<endl;
        index = i;
        //removeEl(arr1, size, index);
        //i--;
        //end = end - 1;
        break;
      }
    }
  }
}


int main() {
  
  cout<<"T - 1  ( my + babbar )\n";
  // lecture - 10 , time - 01:02:03
  
  int s1 =7;
  int arr1[s1] = {2,5,3,4,6,7,1};
  int sum = 7;
  
  pairSum(arr1, s1, sum );

  
  return 0;
}
