#include<bits/stdc++.h>
using namespace std;

int main(){
  int a,b,c,d,e,f,i,j,k,l,m;
  cin>>a>>b>>c>>d;
  
  e=(3*a)/10;
  f=(a-((a/250)*c));
  
  i=max(e,f);
  
  k=(3*b)/10;
  l=(b-((b/250)*d));
  
  j=max(k,l);
  
  
  if(i>j)
  cout<<"Misha"<<endl;
  
  else if(j>i)
  cout<<"Vasya"<<endl;
  
  else
  cout<<"Tie"<<endl;
}
