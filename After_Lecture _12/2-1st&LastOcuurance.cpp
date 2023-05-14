#include <iostream>
using namespace std;

void position(int arr1[], int size, int key){
  
  int start = 0;
  int end = size;
  
  int index = -1;
  
  while(end >= start){
    
    int mid = ( start + end )/2;
    
    if (arr1[mid] == key){
      
      index = mid;
      
      for (int j = mid; j>=0; j--){ // >= is necessary because thats a border condition
        if (arr1[j-1] != key){    // previously did - arr1[j] != key then cout<<j+1; but was not printing when the int was occuring only once, so this worked
          cout<<"first occur at index ";
          cout<<j<<endl;
          break;
        }
      }
      
      for (int i = mid ; i<size; i++){  // first wrote the binary search code then added these two loops 
        if (arr1[i+1] != key){   // previously did - arr1[i] != key then cout<<i-1;
          cout<<"last occur at index ";
          cout<<i<<endl;
          break;
        }
      }
      
      break;
    }
    else if(arr1[mid] > key){
      end = mid - 1;
    }
    else if(arr1[mid] < key){
      start = mid + 1;
    }
  }
  if (index == -1){
    cout<<-1<<endl;
    cout<<-1<<endl;
  }
}

int main(){
  
  cout<<"T - 1 ( my )"<<endl;
  
  int s = 7;
  int arr1[s] = {1,3,4,4,4,8,9};
  int key = 0;
  position(arr1, s, key);
  

  
  return 0;
}     