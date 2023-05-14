#include <iostream>
using namespace std;

// T -1 (my)

void delElement(int arr1[], int size1){
  
  int size = size1 - 1;
  for (int i =0; i<size; i++){
    arr1[i] = arr1[i+1];
  }
}


void check(int arr1[], int arr2[], int size1, int size2){
  //int initial = 0;
  
  int end = size1;
  
  for(int i = 0; i<size2; i++){
    for(int j = 0; j<end; j++){
      if (arr2[i] == arr1[j]){
        //cout<<"i = "<<i<<endl;
        //cout<<"j = "<<j<<endl;
        cout<<arr2[i]<<endl;
        delElement(arr1, end);
        end = end - 1;
        break;
        //cout<<"end = "<<end<<endl;
        //initial = j; // this is wrong
      }
    }
  }
}

int main(){

  cout<<"T -1 (my)"<<endl;
  
  int s1 =3;
  int s2 = 2;
  int arr1[s1] = {1,2,3};
  int arr2[s2] = {3,4};
  
  check(arr1, arr2, s1, s2);
  
  
  
  
  return 0;
}