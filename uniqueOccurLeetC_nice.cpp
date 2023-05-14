#include <iostream>
using namespace std;

int noOfDiff(int size) {
  int sum = 0;
  int count1 ;
  int size1 = size +1;
  int i = 0;
  
  while(sum < size){
    //cout<<"i = "<<i<<endl;
    sum = sum + i;
    count1 = i;
    i = i + 1;
  }
  //cout<<"count1 = "<<count1<<endl;
  return count1;
}



int uniqOccur(int arr[], int size){
  int count = 0;
  int index;
  int element;
  int sum2 = 0;

  for(int i = 0; i<size; i++){
    element = arr[i];
    for (int j=0; j<size; j++){
      if (arr[j] == element){
        count ++;
      }
    }
    sum2 += count;
    //cout<<"count for i = "<<i<<" is "<<count<<endl;
    count = 0;
  }
  cout<<"sum2 = "<<sum2<<endl;
  return sum2;
}



int summ(int count1){
  int sum3 = 0;
  for(int i = 1; i<=count1; i++){
    sum3 += i*i;
  }
  cout<<"sum3 = "<<sum3<<endl;
  return sum3;
}



int main() {
  
  cout<<"tech - 1 ( MY )\n";
  cout<<"- - - - - - - -\n";
  int s = 10;
  int arr1[s] = {-3,0,1,-3,1,1,1,-3,10,0};
  //findUnique(arr1, 7);
  
  //noOfDiff(s);
  //cout<<endl;
  
  int sum2 = uniqOccur(arr1,s);
  int sum3 = summ(noOfDiff(s));
  
  if(sum2 == sum3){
    cout<<"true";
  }
  else{
    cout<<"false";
  }
  return 0;
}