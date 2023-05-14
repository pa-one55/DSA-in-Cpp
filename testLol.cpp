#include<iostream>  
#include<vector>  
using namespace std;  

int main()  {
  vector<int> numbers;
  for (int i =0; i<9; i++ ){
    numbers.push_back(i);
  }
  cout<<numbers;
}