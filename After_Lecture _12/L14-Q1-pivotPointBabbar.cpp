#include <iostream>
using namespace std;

int pivot(int arr1[], int size){
  int start = 0;
  int end = size -1;
  int mid = (end+start)/2;

  while(start < end){
    /*cout<<"for the while loop\n";
    cout<<"start = "<<start<<endl;
    cout<<"end = "<<end<<endl;
    cout<<"mid = "<<mid<<endl;*/
    
    if (arr1[0] < arr1[mid]){
      start = mid+1 ;
      mid = (end+start)/2;
      /*cout<<"entered i1"<<endl;
      cout<<"start = "<<start<<endl;
      cout<<"end = "<<end<<endl;
      cout<<"mid = "<<mid<<endl;*/
    }
    
    else{
      end = mid;
      mid = (end+start)/2;
      cout<<"entered i2\n";
    }
    
  }
  //cout<<"pivot is"<<arr1[start]<<endl;;
  //cout<<"start = "<<start<<endl;
  return start;
  
}

int main(){
  cout<<"babbar's tech\n";

  int s = 7;
  int arr1[s] = {3,4,6,7,8,9,2};

  //cout<<"pivot is"<<arr1[start];
  cout<<"the pivot is at index "<<pivot(arr1,s);
  return 0;
}