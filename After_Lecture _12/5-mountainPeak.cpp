#include <iostream>
using namespace std;

int maxx(int arr1[], int size){
  
  int max = 0;
  int start = 0;
  int end = size;
  
  while(end > start){
    
    int mid = (start + end )/2;
    int element = arr1[mid];
    
    //cout<<"mid is "<<mid<<endl;
    if (arr1[mid - 1] < element && arr1[mid+1] < element){
      max = arr1[mid];
      break;
    }
    else if (arr1[mid-1] < element && arr1[mid+1] > element){
      start = mid;
      //break;
    }
    else if (arr1[mid-1] > element && arr1[mid+1] < element){
      end = mid;
      //break;
    }
  }
  cout<<"Max = "<<max<<endl;
  
  return max;
}



int main(){
  cout<<"T-1 (My)\n";
  int s = 7;
  int arr1[s] = {0,1,3,6,5,4,2};
  maxx(arr1, s);

 
  return 0;
}     