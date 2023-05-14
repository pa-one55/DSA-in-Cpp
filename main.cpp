#include <iostream>
using namespace std;

int nFactor(int a){
  cout<<"running nFactor\n";
  int nFact = 1;
  
  while(a>1){
    nFact = nFact*n;
      a--;
  }
  return nFcat;
}

int nCr(int a, int b){
  cout<<"running nCr\n"<<endl;
  int _nCr = 1;
  _nCr = nFactor(a)/( nFactor(b)*nFactor(a-b) );
  return _nCr;
}

int main() {
  cout << "Hello World!\n";

  int n,r;
  
  cout<<"enter the value of n: ";
  cin>>n;
  cout<<"enter the value of r: ";
  cin>>r;

  cout<<"n factorial = "<<nFact(n)<<endl;
  cout<<"r factorial = "<<nFact(r)<<endl;
  cout<<"nCr = "<<nCr(n,r);
  
  return  0;
}