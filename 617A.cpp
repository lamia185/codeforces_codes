#include<bits/stdc++.h>
using namespace std;

int main(){
  int a,b,c,d,e,f,j,k,l,m,n,o,p,q,i,s,h,g,min=0;
  cin>>a;
  b=a/1;
  i=(b*1)-a;
  if(i!=0 && i<=5)
    b=b+1;
    
  min=b;
  
  c=a/2;
  j=(c*2)-a;
  if(j!=0 && j<=5)
    c=c+1;
    
  d=a/3;
    k=(d*3)-a;
  if(k!=0 && k<=5)
    d=d+1;
    
  e=a/4;
    m=(e*4)-a;
  if(m!=0 && m<=5)
    e=e+1;
    
  f=a/5;
    n=(f*5)-a;
  if(n!=0 && n<=5)
    f=f+1;
  
  if(c<min)
  min=c;
  
  if(d<min)
  min=d;
  
  if(e<min)
  min=e;
  
  if(f<min)
  min=f;
  
  cout<<min<<endl;
}
