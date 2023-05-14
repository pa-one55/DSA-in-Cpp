#include <iostream>
using namespace std;

int fstPosition(int arr1[], int size, int key){
  
  int start = 0;
  int end = size;
  int index = -1;

  while(end >= start){
    int mid = ( start + end )/2;
    
    if (arr1[mid] == key){
      index = mid;
      end = mid-1;
      
      //cout<<index<<endl;
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
  else{
    cout<<"first occur at index "<<index<<endl;
  }
  return index;
}



int lastPosition(int arr1[], int size, int key){
  
  int start = 0;
  int end = size;
  int index = -1;
  
  while(end >= start){
    int mid = ( start + end )/2;
    
    if (arr1[mid] == key){
      index = mid;
      start = mid+1;
      //cout<<index<<endl;
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
  }
  else{
    cout<<"last occur at index "<<index<<endl;
  }
  return index;
}




int main(){
  
  cout<<"T - 2 ( my + babbar(idea - break the problem into two parts - a) 1st position, b) last position ) )"<<endl;
  cout<<"do (did) it all using binary search\n";
  cout<<"- - - -  - - - - - - - -\n";
  
  int s = 7;
  int arr1[s] = {1,4,4,4,4,4,9};
  int key = 4;
  //fstPosition(arr1, s, key);
  //lastPosition(arr1, s, key);

  return 0;
}     