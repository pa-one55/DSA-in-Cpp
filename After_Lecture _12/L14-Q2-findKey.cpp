#include <iostream>
using namespace std;

int pivot(int arr[], int size){
  int start = 0;
  int end = size-1;
  int mid = (start + end)/2;

  while(start <end){
    
    if(arr[0] < arr[mid]){
      start = mid +1;
      mid = (start + end)/2;
    }
    else{
      end = mid;
      mid = (start + end)/2;
    }
  }
  //cout<<"pivot is at index "<<start<<endl;
  return start;
}


int findKey(int arr[], int size, int key ){
  int start = 0;
  int end = 0;
  int mid = -1;
  int Pivot = pivot(arr,size);
  
  while(end > start){
    //cout<<"while\n";
    
      
    cout<<"entered i1\n";
    
      start = 0;
      end = Pivot-1;
      mid = (start + end)/2;
      
      if (arr[mid] == key){
        //cout<<"mil gya"<<endl;
        break;
      }
      
      else if( arr[mid] < key){
        //cout<<"entered i11\n";
        start = mid+1;
        mid = (start + end)/2;
      }
      else if (arr[mid] > key){
        //cout<<"entered i12\n";
        end = mid -1;
        mid = (start + end)/2;
      }
    }
    
    else if (key <= arr[size-1]) {
      
      cout<<"entered i2\n";
      
      start = Pivot;
      end = size -1;
      mid = (start + end)/2;
      
      /*cout<<"start = "<<start<<endl;
      cout<<"end = "<<end<<endl;
      cout<<"mid = "<<mid<<endl; */
      
      if (arr[mid] == key){
        //cout<<"mil gya"<<endl;
        break;
      }
      else if(arr[mid] < key){
        //cout<<"entered i21\n";
        start = mid+1;
        mid = (start + end)/2;
      }
      else if (arr[mid] > key){
        //cout<<"entered i22\n";
        end = mid -1;
        mid = (start + end)/2;
      }
    }
  }

  return mid;
}

int main(){
  cout<<"MY - description below\n";
  // first find the pivot, and by comparison we know in which segment our key lies, so after finding the pivot by using BS only in one segment gind the key

  int s = 7;
  int arr1[s] = {4,6,7,8,9,2,3};
  int key = 2;
  cout<<"pivot is at index "<<pivot(arr1,s)<<endl;
  //findKey(arr1,s,key);
  cout<<"key is at index "<<findKey(arr1,s,key)<<endl;
  return 0;
}