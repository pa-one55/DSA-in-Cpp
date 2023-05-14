#include <iostream>
using namespace std;


void fIndex(int arr[], int size, int key){
  
  int index;
  int start = 0;
  int end=size;
  int mid = (start + end )/2;
  int first ;
  int last ;
  int count = 0;
  
  for ( int i = 0; i <size ; i++){
    
    
    if (start = end && arr[start] != key) {
      index = -1;
      //cout<<"lol\n";
    }
    
    if(arr[mid] == key){
      index = mid;
      count++;
      //cout<<"index a is "<<index<<endl;
    }
    else if (arr[mid] < key){
      start = mid;
      
    }
    
    else if (arr[mid] > key){
      end = mid;
    }

    mid = (start + end )/2;
    
    if (index >= 0){
      first = index;
    }
    
  }
  cout<<"first index = "<<first<<endl;
  
  
}


void lIndex(int arr[], int size, int key){
  
  int index;
  int start = 0;
  int end = size;
  int mid = (start + end )/2;
  int first ;
  int last ;
  int count = 0;
  cout<<"count = "<<count<<endl;
  
  while ( end > start){
    
    
    /*if (start = end && arr[start] != key) {
      index = -1;
      //cout<<"lol\n";
    }*/
    
    if(arr[mid] == key){
      index = mid;
      count++;
      //cout<<"index a is "<<index<<endl;
    }
    else if (arr[mid] < key){
      start = mid;
      
    }
    
    else if (arr[mid] > key){
      end = mid;
    }

    mid = (start + end )/2;
    
    if (index >= 0){
      last = index;
    }
    //cout<<"index = "<<index<<endl;;
    
  }
  cout<<"last index = "<<last<<endl;
  cout<<"count = "<<count<<endl;
  
  
}





int main()
{
    cout << "Hello..\n";
    //cout<<"lol";
    
    
    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {5,8,11,14,14};
    int key = 18;
    
    fIndex(odd, 5, 14);
    lIndex(odd,5,14);
  

    //cout<<"the number "<<key<<" is present at index = "<<indexx(even, 6, key);
    
    /*int ans = indexx(odd, 5, 14);
    if (ans >= 0){
      cout<<ans;
    }
    else{
      cout<<"Your number is not there\n";
    }
    cout<<ans; */
    
    return 0;
}