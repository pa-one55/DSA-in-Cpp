#include <iostream>
using namespace std;

int pivot(int arr1[], int s){
  
  int initialMid = s/2;
  int m1 = initialMid/2;
  int m2 = (initialMid + s)/2;
  
  int m11 = 0;
  int m22 = 0;
  

  while (1){
    
    //m11 = m1;
    cout<<"keep going\n";
    cout<<"m1 = "<<m1<<endl;
    cout<<"m2 = "<<m2<<endl;
    cout<<"m11 = "<<m11<<endl;
    cout<<"m22 = "<<m22<<endl;
    
    
    if (arr1[m1] > arr1[m2] ){
      
      cout<<"found the interval"<<endl;
      cout<<"m1 = "<<m1<<endl;
      cout<<"m2 = "<<m2<<endl;
      cout<<"- - - - - -\n";
      
      m11 = initialMid;
      m22 = m1;
      
      //m22 = m1;
      
      int mid = (m11 + m22)/2;
      
      cout<<"m11 = "<<m11<<endl;
      cout<<"m22 = "<<m22<<endl;
      cout<<"mid = "<<mid<<endl;
      
      while (m11 >= m22){
        cout<<"entered the second loop\n";
        if (arr1[mid] > arr1[mid-1] && arr1[mid] > arr1[mid+1]){
          cout<<"Pivot is at index "<<mid<<endl;
          cout<<"And the pivot is "<<arr1[mid]<<endl;
          //cout<<"woah\n";
          break;
        }
        else if (arr1[mid] > arr1[m11]){
          m22 = mid;
          cout<<"m22 = mid = "<<m22<<endl;
        }
        else if (arr1[mid] < arr1[m11]){
          m11 = mid;
          cout<<"m11 = mid = "<<m11<<endl;;
        }
      }
      break;
    }
    
    /*else if (arr1[m1] > arr1[initialMid] && arr1[m1] > arr1[m2] ){ // mtlb alag segments pe hai m1 and m2 
      
      cout<<"else if - 1\n";
    }*/
    
    else if ( arr1[m1] < arr1[initialMid] && arr1[m1] < arr1[m2]){
      m1 = m1/2;
      m2 = (m2 + s)/2;
      cout<<"else if - 1\n";
      cout<<"m1 = "<<m1<<endl;
      cout<<"m2 = "<<m2<<endl;
      cout<<"- - - - - -\n";
    }
  }
  return 1;
  
}

int main(){
  
  cout<<"T - 1  (my) ( failed ) \n";
  cout<<"- - - - - -\n";
  
  int s = 8;
  int arr1[s] = {3,4,5,6,7,8,9,2,3};
  // call the function
  pivot(arr1,s);
  
  return 0;
}