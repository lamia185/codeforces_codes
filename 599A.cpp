#include<bits/stdc++.h>
using namespace std;

int main(){
  int d1,d2,d3,a,b,c,d,e,f,i,l,k;
  
  cin>>d1>>d2>>d3;
  
  a=d1+d3+d2;
  b=d1+d1+d2+d2;
  c=d2+d3+d3+d2;
  d=d1+d3+d3+d1;
  
  
  k=a;
  
  if(b<k)
  k=b;
  
  if(c<k)
  k=c;
  
  if(d<k)
  k=d;
  
  cout<<k<<endl;
}
